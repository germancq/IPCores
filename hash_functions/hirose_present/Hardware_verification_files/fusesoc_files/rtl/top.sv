/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-03-08 18:58:16
 * @ Modified by: Your name
 * @ Modified time: 2020-03-08 19:02:56
 * @ Description:
 */

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


autotest_module autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),


    .rst_uut(rst_uut),
    .plaintext_uut(plaintext_uut),
    .end_uut(end_uut),
    .hash_o_uut(hash_o_uut),
    

    .debug(debug_data)
);


hirose_present_wrapper #(.DATA_WIDTH(64)) hirose_present_wrapper_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .plaintext(plaintext_uut),
    .c(c),
    .hash_output(hash_o_uut),
    .end_signal(end_uut)
);

endmodule : top