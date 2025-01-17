/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2020-09-17 13:20:37
 * @ Modified by: Your name
 * @ Modified time: 2020-12-07 21:29:51
 * @ Description:
 */




module autotest_module
#(parameter INPUT_SIZE_1 = 32,
  parameter INPUT_SIZE_2 = 32,
  parameter INPUT_SIZE_3 = 32,
  parameter INPUT_SIZE_4 = 32,
  parameter OUTPUT_SIZE_1 = 32)
(
    input clk,
    input rst,

    output cs,
    output sclk,
    output mosi,
    input miso,

    /*UUT control signals*/
    output rst_uut,
    output rq_uut,
    input end_uut,
    input end_stage_1_uut,
    /*inputs to UUT*/
    output [INPUT_SIZE_1-1:0] input_to_UUT_1,
    output [INPUT_SIZE_2-1:0] input_to_UUT_2,
    output [INPUT_SIZE_3-1:0] input_to_UUT_3,
    output [INPUT_SIZE_4-1:0] input_to_UUT_4,
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


  

  fsm_autotest #(
    .INPUT_SIZE_1(INPUT_SIZE_1),
    .INPUT_SIZE_2(INPUT_SIZE_2),
    .INPUT_SIZE_3(INPUT_SIZE_3),
    .INPUT_SIZE_4(INPUT_SIZE_4),
    .OUTPUT_SIZE_1(OUTPUT_SIZE_1)
  )
  fsm_isnt(
    .clk(clk),
    .rst(rst),
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
    .end_uut(end_uut),
    .rq_uut(rq_uut),
    .end_stage_1_uut(end_stage_1_uut),
    //uut paramters signals
    .input_to_UUT_1(input_to_UUT_1),
    .input_to_UUT_2(input_to_UUT_2),
    .input_to_UUT_3(input_to_UUT_3),
    .input_to_UUT_4(input_to_UUT_4),
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

endmodule : autotest_module
