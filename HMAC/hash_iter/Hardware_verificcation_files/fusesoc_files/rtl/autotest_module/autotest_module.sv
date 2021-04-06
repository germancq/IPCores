/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-06-26 21:42:54
 * @ Modified by: German Cano Quiveu, germancq@dte.us.es
 * @ Modified time: 2021-04-06 22:14:06
 * @ Description:
 */





module autotest_feed_module
#(parameter FEED_DATA_SIZE = 32,
  parameter INPUT_SIZE_1 = 64,
  parameter OUTPUT_SIZE_1 = 32)
(
    input clk,
    input rst,
    input start,

    output cs,
    output sclk,
    output mosi,
    input miso,

    /*UUT control signals*/
    output rst_uut,
    input err_uut,
    input end_uut,
    output feed_data_control_uut,
    input busy_uut,
    output stop_feed_uut,
    /*inputs to UUT*/
    output [FEED_DATA_SIZE-1:0] feed_data_uut,
    output [INPUT_SIZE_1-1:0] input_to_UUT_1,
    /*outputs from UUT*/
    input [OUTPUT_SIZE_1-1:0] output_from_UUT_1,


    input [1:0] sw_debug,
    output [31:0] debug
  );

  logic spi_busy;
  logic [31:0] spi_block_addr;
  logic [7:0] spi_data_out;
  logic spi_r_block;
  logic spi_r_multi_block;
  logic spi_r_byte;
  logic spi_err;
  logic spi_rst;
  logic [7:0] spi_data_in;
  logic spi_w_block;
  logic spi_w_byte;


  

  control_unit_feed #(
    .FEED_DATA_SIZE(FEED_DATA_SIZE),
    .OUTPUT_SIZE_1(OUTPUT_SIZE_1)
  )
  fsm_isnt(
    .clk(clk),
    .rst(rst),
    .start(start),
    //sdspihost signals
    .spi_busy(spi_busy),
    .spi_block_addr(spi_block_addr),
    .spi_data_out(spi_data_out),
    .spi_r_block(spi_r_block),
    .spi_r_byte(spi_r_byte),
    .spi_r_multi_block(spi_r_multi_block),
    .spi_rst(spi_rst),
    .spi_err(spi_err),
    .spi_data_in(spi_data_in),
    .spi_w_block(spi_w_block),
    .spi_w_byte(spi_w_byte),
    //uut ctrl signals
    .rst_uut(rst_uut),
    .err_uut(err_uut),
    .end_uut(end_uut),
    .feed_data_control_uut(feed_data_control_uut),
    .busy_uut(busy_uut),
    .stop_feed_uut(stop_feed_uut),
    //uut paramters signals
    .feed_data_uut(feed_data_uut),
    .input_to_UUT_1(input_to_UUT_1),
    //uut results signals
    .output_from_UUT_1(output_from_UUT_1),
    //debug
    .sw_debug(sw_debug),
    .debug_signal(debug)
  );


  sdspihost sdspi_inst(
    .clk(clk),
    .reset(spi_rst),
    .busy(spi_busy),
    .err(spi_err),

    .r_block(spi_r_block),
    .r_multi_block(spi_r_multi_block),
    .r_byte(spi_r_byte),
    .w_block(spi_w_block),
    .w_byte(spi_w_byte),
    .block_addr(spi_block_addr),
    .data_out(spi_data_out),
    .data_in(spi_data_in),


    //SPI interface
    .miso(miso),
    .mosi(mosi),
    .sclk(sclk),
    .ss(cs),
    ////
    .sclk_speed(4'h1), //25MHz if clk is 100MHz
    
    .debug()
  );

endmodule : autotest_feed_module
