/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-03-07 16:03:51
 * @ Modified by: Your name
 * @ Modified time: 2020-04-23 19:41:01
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


logic [31:0] debug_data;
  display #(.N(32),.CLK_HZ(100000000)) display_inst(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .din(debug_data),
    .an(AN),
    .seg(seg)
  );

logic [79:0] key;
logic [79:0] iv;
logic rst_uut;
logic end_uut;
logic [63:0] block_o_uut;


autotest_module #(
  .INPUT_SIZE_1(80),
  .INPUT_SIZE_2(80),
  .OUTPUT_SIZE_1(64)
) autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),


    .rst_uut(rst_uut),
    .input_to_UUT_1(iv),
    .input_to_UUT_2(key),
    .end_uut(end_uut),
    .output_from_UUT_1(block_o_uut),
    
    .sw_debug(switch_i),
    .debug(debug_data)
);


trivium_wrapper #(.DATA_WIDTH(64)) trivium_wrapper_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .key(key),
    .iv(iv),
    .next_data(0),
    .end_block(end_uut),
    .block_o(block_o_uut)
);

endmodule : top