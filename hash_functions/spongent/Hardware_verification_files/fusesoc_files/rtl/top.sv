/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2020-03-09 12:14:34
 * @ Modified by: Your name
 * @ Modified time: 2020-03-09 18:41:50
 * @ Description:
 */

localparam N = 256;
localparam c = 256;
localparam r = 16;
localparam R = 140;
localparam lCounter_initial_state = 8'h9E;
localparam lCounter_feedback_coeff = 9'h11D;
localparam DATA_WIDTH = 64; 

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


logic [31:0] debug_data;
  display #(.N(32),.CLK_HZ(100000000)) display_inst(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .din(debug_data),
    .an(AN),
    .seg(seg)
  );

logic [DATA_WIDTH-1:0] msg_uut;
logic rst_uut;
logic end_uut;
logic [N-1:0] hash_o_uut;


autotest_module autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),


    .rst_uut(rst_uut),
    .msg_uut(msg_uut),
    .end_uut(end_uut),
    .hash_o_uut(hash_o_uut),
    

    .debug(debug_data)
);


spongent #(
    .DATA_WIDTH(DATA_WIDTH),
    .N(N),
    .c(c),
    .r(r),
    .R(R),
    .lCounter_initial_state(lCounter_initial_state),
    .lCounter_feedback_coeff(lCounter_feedback_coeff)

) spongent_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .msg(msg_uut),
    .hash(hash_o_uut),
    .end_hash(end_uut)
);

endmodule : top