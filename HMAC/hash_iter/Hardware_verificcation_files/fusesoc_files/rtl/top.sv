/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-07-10 12:35:55
 * @ Modified by: German Cano Quiveu, germancq@dte.us.es
 * @ Modified time: 2021-04-06 22:13:25
 * @ Description:
 */



localparam N = 256;
localparam c = 256;
localparam r = 16;
localparam R = 140;
localparam lCounter_initial_state = 8'h9E;
localparam lCounter_feedback_coeff = 9'h11D; 
localparam KEY_WIDTH = 64;

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

    logic rst_uut;
    logic end_uut;
    logic feed_data_control_uut;
    logic busy_uut;
    logic stop_feed_uut;
    logic [r-1:0] feed_data_uut;
    logic [N-1:0] output_from_UUT_1;
    logic [KEY_WIDTH-1:0] key_uut;


    autotest_feed_module #(
        .FEED_DATA_SIZE(r),
        .INPUT_SIZE_1(KEY_WIDTH),
        .OUTPUT_SIZE_1(N)
    )autotest_impl(
        .clk(sys_clk_pad_i),
        .rst(rst),
        .start(start),
        .cs(cs),
        .sclk(sclk),
        .mosi(mosi),
        .miso(miso),
        .rst_uut(rst_uut),
        .err_uut(1'b0),
        .end_uut(end_uut),
        .feed_data_control_uut(feed_data_control_uut),
        .busy_uut(busy_uut),
        .stop_feed_uut(stop_feed_uut),
        .feed_data_uut(feed_data_uut),
        .input_to_UUT_1(key_uut),
        .output_from_UUT_1(output_from_UUT_1),
        .sw_debug(switch_i),
        .debug(debug_data)
    );


    hmac_spongent_iter #(
        .N(N),
        .c(c),
        .r(r),
        .R(R),
        .lCounter_feedback_coeff(lCounter_feedback_coeff),
        .lCounter_initial_state(lCounter_initial_state),
        .KEY_WIDTH(KEY_WIDTH)
    )uut(
        .clk(sys_clk_pad_i),
        .rst(rst_uut),
        .feed_data(feed_data_uut),
        .data_ready(feed_data_control_uut),
        .stop_feed(stop_feed_uut),
        .busy(busy_uut),
        .key(key_uut),
        .end_hmac(end_uut),
        .digest(output_from_UUT_1)
    );
    


endmodule: top