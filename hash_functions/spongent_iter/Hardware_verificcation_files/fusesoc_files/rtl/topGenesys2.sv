/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2021-09-15 15:45:43
 * @ Modified by: German Cano Quiveu, germancq
 * @ Modified time: 2021-09-15 15:47:19
 * @ Description:
 */

localparam N = 88;
localparam c = 80;
localparam r = 8;
localparam R = 45;
localparam lCounter_initial_state = 6'h05;
localparam lCounter_feedback_coeff = 7'h61; 

module top(
    input sysclk_n,
    input sysclk_p,
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


    logic sys_clk_pad_i;

    IBUFGDS#(.DIFF_TERM("FALSE"),//DifferentialTermination.
         .IBUF_LOW_PWR("TRUE"),//Lowpower="TRUE",Highestperformance="FALSE"
         .IOSTANDARD("DEFAULT")//SpecifytheinputI/Ostandard
         )
         IBUFGDS_inst(
           .O(sys_clk_pad_i),//Clockbufferoutput
           .I(sysclk_p),//Diff_pclockbufferinput(connectdirectlytotop-levelport)
           .IB(sysclk_n)//Diff_nclockbufferinput(connectdirectlytotop-levelport
         );

    autotest_feed_module #(
        .FEED_DATA_SIZE(r),
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
        .output_from_UUT_1(output_from_UUT_1),
        .sw_debug(switch_i),
        .debug(debug_data)
    );


    spongent_iter #(
        .N(N),
        .c(c),
        .r(r),
        .R(R),
        .lCounter_feedback_coeff(lCounter_feedback_coeff),
        .lCounter_initial_state(lCounter_initial_state)
    )uut(
        .clk(sys_clk_pad_i),
        .rst(rst_uut),
        .data_input(feed_data_uut),
        .data_ready(feed_data_control_uut),
        .start_hash(stop_feed_uut),
        .busy(busy_uut),
        .end_hash(end_uut),
        .digest(output_from_UUT_1)
    );
    


endmodule: top