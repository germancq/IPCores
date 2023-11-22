/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2023-11-15 14:01:41
 * @ Modified by: German Cano Quiveu, germancq
 * @ Modified time: 2023-11-20 18:51:04
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
logic [127:0] block_o;
logic end_signal;
logic rq_data;
logic end_key_generation;



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
    .rq_uut(rq_data),
    .end_stage_1_uut(end_key_generation),

    .input_to_UUT_1(key),
    .input_to_UUT_2(block_i),
    .output_from_UUT_1(block_o),
    

    
    
    .sw_debug(switch_i),
    .debug(debug_data)
);

LEA #(.KEY_LEN(128)) lea_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .key(key),
    .block_i(block_i),
    .block_o(block_o),
    .rq_data(rq_data),
    .end_key_generation(end_key_generation),
    .end_signal(end_signal)
);

endmodule : top