/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2019-10-01 16:32:35
 * @ Modified by: German Cano Quiveu, germancq@dte.us.es
 * @ Modified time: 2021-04-06 20:20:35
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

    input [3:0] switch_i,
    output [15:0] leds_o
);




  assign SD_RESET = 1'b0;
  assign SD_DAT_1 = 1'b1;
  assign SD_DAT_2 = 1'b1;

logic rst_uut;
logic [63:0] block_i;
logic [79:0] key;
logic [7:0] enc_dec;
logic end_key_generation;
logic [63:0] block_o;
logic end_signal;
logic clk_uut; 


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
    .INPUT_SIZE_3(8),
    .OUTPUT_SIZE_1(64)
  )autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .start(start),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),
    

    /*UUT signals*/
    .rst_uut(rst_uut),
    .input_to_UUT_1(block_i),
    .input_to_UUT_2(key),
    .input_to_UUT_3(enc_dec),
    .block_o_uut(block_o),
    .end_uut(end_signal),

    .clk_uut(clk_uut),

    .sw_debug(switch_i[1:0]),
    .debug(debug_data)
);

present present_impl(
    .clk(clk_uut),
    .rst(rst_uut),
    .enc_dec(enc_dec[0]),
    .key(key),
    .block_i(block_i),
    .end_key_generation(end_key_generation),
    .block_o(block_o),
    .rq_data(1'b0),
    .end_signal(end_signal)
);

endmodule : top