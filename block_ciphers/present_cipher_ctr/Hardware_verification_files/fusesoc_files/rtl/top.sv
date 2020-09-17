/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2020-09-17 13:10:35
 * @ Modified by: Your name
 * @ Modified time: 2020-09-17 15:53:18
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
logic [63:0] block_i;
logic [79:0] key;
logic [63:0] IV;
logic [63:0] block_number;
logic [63:0] block_o;
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
    .INPUT_SIZE_1(64),
    .INPUT_SIZE_2(80),
    .INPUT_SIZE_3(64),
    .INPUT_SIZE_4(64),
    .OUTPUT_SIZE_1(64)
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

present_ctr present_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .IV(IV),
    .block_number(block_number),
    .key(key),
    .block_i(block_i),
    .block_o(block_o),
    .end_signal(end_signal)
);

endmodule : top