/**
 * File              : speck.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 06.10.2025
 * Last Modified Date: 06.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module speck #(
    parameter N = 16,
    parameter M = 4
) (
    input clk,
    input rst,
    output end_key_generation,
    input [(M*N)-1:0] key,
    input [(2*N)-1:0] block_i,
    output [(2*N)-1:0] block_o,
    input enc_dec,
    input rq_data,
    output end_signal
);


  parameter T_16 = 22;
  parameter T_24 = M == 3 ? 22 : 23;
  parameter T_32 = M == 3 ? 26 : 27;
  parameter T_48 = M == 2 ? 28 : 29;
  parameter T_64 = M == 2 ? 32 : (M == 3 ? 33 : 34);

  parameter T = N == 16 ? T_16 : (N == 24 ? T_24 : (N == 32 ? T_32 : (N == 48 ? T_48 : T_64)));




  logic [N-1:0] round_keys[T-1:0];
  key_schedule #(
      .N(N),
      .M(M),
      .T(T)
  ) key_sch_impl (
      .clk(clk),
      .rst(rst),
      .start(1'b1),
      .key(key),
      .round_keys(round_keys),
      .end_signal(end_key_generation)
  );


  encrypt #(
      .N(N),
      .M(M),
      .T(T)
  ) encrypt_impl (
      .clk(clk),
      .rst(!end_key_generation || rst),
      .start(rq_data),
      .round_keys(round_keys),
      .blk_i(block_i),
      .blk_o(block_o),
      .end_signal(end_signal)
  );

endmodule

