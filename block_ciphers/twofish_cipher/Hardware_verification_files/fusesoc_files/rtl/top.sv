/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2019-11-05 15:47:48
 * @ Modified by: Your name
 * @ Modified time: 2020-03-06 12:43:15
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


  assign SD_RESET = 1'b0;
  assign SD_DAT_1 = 1'b1;
  assign SD_DAT_2 = 1'b1;

logic rst_uut;
logic [127:0] block_i;
logic [127:0] key;
logic enc_dec;
logic [127:0] block_o;
logic end_signal;

logic [31:0] debug_data;
  display #(.N(32),.CLK_HZ(100000000)) display_inst(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .din(debug_data),
    .an(AN),
    .seg(seg)
  );


autotest_module autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),

    /*UUT signals*/
    .rst_uut(rst_uut),
    .block_i_uut(block_i),
    .key_uut(key),
    .encdec_uut(enc_dec),
    .block_o_uut(block_o),
    .end_signal_uut(end_signal),
    
    .debug(debug_data)
);

twofish twofish_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .enc_dec(enc_dec),
    .key(key),
    .text_input(block_i),
    .text_output(block_o),
    .end_signal(end_signal)
);

endmodule : top