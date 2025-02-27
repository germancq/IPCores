/**
 * File              : key_schedule.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 27.02.2025
 * Last Modified Date: 27.02.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module key_schedule #(
    parameter KEY_LEN = 128
) (
    input clk,
    input rst,
    input [KEY_LEN-1:0] key,
    output [KEY_LEN-1:0] wk,
    output [31:0] round_keys[35-((KEY_LEN-128)>>(3)):0],
    output logic end_signal
);

  localparam N_RK = 36 - ((KEY_LEN - 128) >> (3));

  localparam GFN_d = 4;
  localparam GFN_r = 12;


  function [127:0] doubleSwap(input [127:0] block_i);
    return {block_i[120:64], block_i[127:121], block_i[6:0], block_i[63:7]};
  endfunction

  //counter for rounds
  logic up_rounds_counter;
  logic rst_rounds_counter;
  logic [3:0] din_rounds_counter;
  logic [3:0] dout_rounds_counter;
  counter #(
      .DATA_WIDTH(4)
  ) rounds_counter (
      .clk (clk),
      .rst (rst_rounds_counter),
      .up  (up_rounds_counter),
      .down(1'b0),
      .din (din_rounds_counter),
      .dout(dout_rounds_counter)
  );

  //CON
  logic [31:0] CON_128[59:0];
  logic [31:0] CON_192[83:0];
  logic [31:0] CON_256[91:0];
  gen_con gen_con_inst (
      .CON_128(CON_128),
      .CON_192(CON_192),
      .CON_256(CON_256)
  );

  //gfn
  logic gfn_rst;
  logic [31:0] gfn_round_keys[((GFN_d>>1)*GFN_r)-1:0];
  logic [31:0] gfn_block_i[GFN_d - 1:0];
  logic [31:0] gfn_block_o[GFN_d - 1:0];
  logic gfn_end_signal;

  gfn #(
      .d(GFN_d),
      .r(GFN_r)
  ) gfn_inst (
      .clk(clk),
      .rst(gfn_rst),
      .round_keys(gfn_round_keys),
      .block_i(gfn_block_i),
      .block_o(gfn_block_o),
      .end_signal(gfn_end_signal)
  );

  //WK
  //register for T
  //register for L
  //register for RK
  //registers for K,KR,KL

endmodule


















































