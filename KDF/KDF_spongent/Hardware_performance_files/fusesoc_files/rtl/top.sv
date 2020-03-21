/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-03-21 15:17:01
 * @ Modified by: Your name
 * @ Modified time: 2020-03-21 18:13:47
 * @ Description:
 */

localparam N = 256;
localparam c = 256;
localparam r = 16;
localparam R = 140;
localparam lCounter_initial_state = 8'h9E;
localparam lCounter_feedback_coeff = 9'h11D;
localparam SALT_WIDTH = 128; 
localparam COUNT_WIDTH = 32; 
localparam PSW_WIDTH = 96; 

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

logic [SALT_WIDTH-1:0] salt_uut;
logic [COUNT_WIDTH-1:0] count_uut;
logic [PSW_WIDTH-1:0] user_password_uut;
logic rst_uut;
logic end_uut;
logic [N-1:0] key_derivated_o_uut;
logic clk_uut;

autotest_module #(
  .INPUT_SIZE_1(SALT_WIDTH),
  .INPUT_SIZE_2(PSW_WIDTH),
  .INPUT_SIZE_3(COUNT_WIDTH),
  .OUTPUT_SIZE(N)
) autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),

    .clk_uut(clk_uut),
    .rst_uut(rst_uut),
    .input_to_UUT_1(salt_uut),
    .input_to_UUT_2(user_password_uut),
    .input_to_UUT_3(count_uut),
    .end_uut(end_uut),
    .output_from_UUT(key_derivated_o_uut),
    
    .sw_debug(switch_i),
    .debug(debug_data)
);


KDF_spongent #(
  .N(N),
  .c(c),
  .r(r),
  .R(R),
  .lCounter_initial_state(lCounter_initial_state),
  .lCounter_feedback_coeff(lCounter_feedback_coeff),
  .SALT_WIDTH(SALT_WIDTH),
  .COUNT_WIDTH(COUNT_WIDTH),
  .PSW_WIDTH(PSW_WIDTH)
) 
KDF_impl(
    .clk(clk_uut),
    .rst(rst_uut),
    .salt(salt_uut),
    .count(count_uut),
    .user_password(user_password_uut),
    .key_derivated(key_derivated_o_uut),
    .end_signal(end_uut)
);

endmodule : top