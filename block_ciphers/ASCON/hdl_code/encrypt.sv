/**
 * File              : encrypt.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 09.10.2025
 * Last Modified Date: 09.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module encrypt #(
    parameter a = 12,
    parameter b = 8,
    parameter rate = 16,
    parameter k = 128,
    parameter version = 1,
    parameter a_len = 64
) (
    input clk,
    input rst,
    input start,
    input [k-1:0] key,
    input [127:0] nonce,
    input [(rate<<3)-1:0] plaintext,
    input [a_len-1:0] a_data,
    output [(rate<<3)-1:0] ciphertext,
    output [127:0] tag,
    output end_signal
);

  logic sel_i_state_or_p_impl;


  genvar i;
  logic [0:0] state_ascon_cl[4:0];
  logic [0:0] state_ascon_w[4:0];
  logic [63:0] state_ascon_din[4:0];
  logic [63:0] state_ascon_dout[4:0];
  generate
    for (i = 0; i < 5; i++) begin
      register #(
          .DATA_WIDTH(64)
      ) state_ascon_i (
          .clk(clk),
          .cl(state_ascon_cl[i]),
          .w(state_ascon_w[i]),
          .din(state_ascon_din[i]),
          .dout(state_ascon_dout[i])
      );

      assign state_ascon_din[i] = sel_i_state_or_p_impl == 0 ? i_state_impl_state_ascon_din[i]:p_impl_state_ascon_din[i];

      assign state_ascon_w[i] = sel_i_state_or_p_impl == 0 ? 1 : p_impl_state_ascon_w[i];

    end
  endgenerate

  logic [63:0] i_state_impl_state_ascon_din[4:0];
  initial_state #(
      .a(a),
      .b(b),
      .k(k),
      .version(version),
      .rate(rate)
  ) i_state_impl (
      .key(key),
      .nonce(nonce),
      .state_ascon_din(i_state_impl_state_ascon_din)
  );

  logic p_impl_rst;
  logic p_impl_start;
  logic [7:0] p_impl_total_rounds;
  logic [63:0] p_impl_state_ascon_din[4:0];
  logic [0:0] p_impl_state_ascon_w[4:0];
  logic p_impl_end_signal;
  permutation p_impl (
      .clk(clk),
      .rst(p_impl_rst),
      .start(p_impl_start),
      .total_rounds(p_impl_total_rounds),
      .state_ascon_dout(state_ascon_dout),
      .state_ascon_din(p_impl_state_ascon_din),
      .state_ascon_w(p_impl_state_ascon_w),
      .end_signal(p_impl_end_signal)
  );

  logic [31:0] j;
  always_comb begin
    next_state = current_state;

    case (current_state)
      IDLE: begin

      end

    endcase

  end

  always_ff @(posedge clk) begin
    if (rst) begin
      current_state <= IDLE;
    end else begin
      current_state <= next_state;
    end

  end

endmodule
