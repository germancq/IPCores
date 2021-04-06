/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-03-20 13:31:52
 * @ Modified by: German Cano Quiveu, germancq@dte.us.es
 * @ Modified time: 2021-04-06 21:20:33
 * @ Description:
 */

module top(
    input sys_clk_pad_i,
    input rst,
    input start,

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


localparam c = 64'h1234567812345678;

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

logic [63:0] plaintext_uut;
logic rst_uut;
logic end_uut;
logic [127:0] hash_o_uut;
logic clk_uut;


autotest_module #(
  .INPUT_SIZE_1(64),
  .OUTPUT_SIZE(128)
) autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .start(start),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),

    .err_uut(1'b0),
    .clk_uut(clk_uut),
    .rst_uut(rst_uut),
    .input_to_UUT_1(plaintext_uut),
    .end_uut(end_uut),
    .output_from_UUT(hash_o_uut),
    
    .sw_debug(switch_i),
    .debug(debug_data)
);


hirose_present_wrapper #(.DATA_WIDTH(64)) hirose_present_wrapper_impl(
    .clk(clk_uut),
    .rst(rst_uut),
    .plaintext(plaintext_uut),
    .c(c),
    .hash_output(hash_o_uut),
    .end_signal(end_uut)
);

endmodule : top