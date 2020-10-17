/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2019-11-05 15:47:48
 * @ Modified by: Your name
 * @ Modified time: 2020-10-17 20:26:47
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

    input [1:0] switch_i,

    output [15:0] leds_o
);


  assign SD_RESET = 1'b0;
  assign SD_DAT_1 = 1'b1;
  assign SD_DAT_2 = 1'b1;

logic rst_uut;
logic [127:0] block_i;
logic [127:0] key;
logic [127:0] IV;
logic [63:0] block_number;
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


autotest_module #(
  .INPUT_SIZE_1(128),
  .INPUT_SIZE_2(128),
  .INPUT_SIZE_3(128),
  .INPUT_SIZE_4(64),
  .OUTPUT_SIZE_1(128)
)
autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),

    /*UUT signals*/
    .rst_uut(rst_uut),
    .end_uut(end_signal),
    
    .input_to_UUT_1(IV),
    .input_to_UUT_2(key),
    .input_to_UUT_3(block_i),
    .input_to_UUT_4(block_number),
    .output_from_UUT_1(block_o),
    
    
    .sw_debug(switch_i),
    .debug(debug_data)
);

twofish_ctr twofish_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .IV(IV),
    .block_number(block_number),
    .key(key),
    .text_input(block_i),
    .text_output(block_o),
    .end_signal(end_signal)
);

endmodule : top