/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-03-20 22:40:37
 * @ Modified by: German Cano Quiveu, germancq@dte.us.es
 * @ Modified time: 2021-04-06 21:37:04
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

logic [63:0] salt_uut;
logic [31:0] count_uut;
logic [31:0] user_password_uut;
logic rst_uut;
logic end_uut;
logic [127:0] key_derivated_o_uut;


autotest_module #(
  .INPUT_SIZE_1(64),
  .INPUT_SIZE_2(32),
  .INPUT_SIZE_3(32),
  .OUTPUT_SIZE_1(128)
) autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .start(start),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),

    .rst_uut(rst_uut),
    .input_to_UUT_1(salt_uut),
    .input_to_UUT_2(count_uut),
    .input_to_UUT_3(user_password_uut),
    .end_uut(end_uut),
    .output_from_UUT_1(key_derivated_o_uut),
    
    .sw_debug(switch_i),
    .debug(debug_data)
);


KDF_hirose_present hirose_present_wrapper_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .salt(salt_uut),
    .count(count_uut),
    .user_password(user_password_uut),
    .key_derivated(key_derivated_o_uut),
    .end_signal(end_uut)
);

endmodule : top