/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-06-23 12:52:12
 * @ Modified by: Your name
 * @ Modified time: 2020-06-23 12:56:29
 * @ Description:
 */

localparam N = 88;
localparam c = 80;
localparam r = 8;
localparam R = 45;
localparam lCounter_initial_state = 6'h05;
localparam lCounter_feedback_coeff = 7'h61;
localparam INPUT_WIDTH = 64; 
localparam KEY_WIDTH = 64;

module top(
    input sys_clk_pad_i,
    input rst,

    output cs,
    output sclk,
    output mosi,
    input miso,
    output SD_RESET,
    output SD_DAT_1,
    output SD_DAT_2,

    output [6:0] seg,
    output [7:0] AN,

    input [1:0] switch_i,

    output [15:0] leds_o
);




  assign SD_RESET = 1'b0;
  assign SD_DAT_1 = 1'b1;
  assign SD_DAT_2 = 1'b1;


logic [31:0] debug_data;
  display #(.N(32),.CLK_HZ(100000000)) display_inst(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .din(debug_data),
    .an(AN),
    .seg(seg)
  );

logic [INPUT_WIDTH-1:0] msg_uut;
logic [KEY_WIDTH-1:0] key_uut;
logic rst_uut;
logic end_uut;
logic [N-1:0] digest_o_uut;


autotest_module #(
  .INPUT_SIZE_1(INPUT_WIDTH),
  .INPUT_SIZE_2(KEY_WIDTH),
  .OUTPUT_SIZE_1(N)
) autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),

    .err_uut(1'b0),
    .rst_uut(rst_uut),
    .input_to_UUT_1(msg_uut),
    .input_to_UUT_2(key_uut),
    .end_uut(end_uut),
    .output_from_UUT_1(digest_o_uut),
    
    .sw_debug(switch_i),
    .debug(debug_data)
);



hmac_spongent #(
    .INPUT_WIDTH(INPUT_WIDTH),
    .KEY_WIDTH(KEY_WIDTH),
    .N(N),
    .c(c),
    .r(r),
    .R(R),
    .lCounter_initial_state(lCounter_initial_state),
    .lCounter_feedback_coeff(lCounter_feedback_coeff)

) hmac_uut(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .key(),
    .msg(msg_uut),
    .digest(digest_o_uut),
    .end_hmac(end_uut)
);

endmodule : top