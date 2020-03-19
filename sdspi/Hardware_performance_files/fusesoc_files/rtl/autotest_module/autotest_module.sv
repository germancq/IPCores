/**
 * @Author: German Cano Quiveu <germancq>
 * @Date:   2019-03-01T15:43:26+01:00
 * @Email:  germancq@dte.us.es
 * @Filename: autotest_module.v
 * @Last modified by:   germancq
 * @Last modified time: 2019-03-05T13:36:26+01:00
 */

module autotest_module #(
  parameter INPUT_SIZE_1 = 32,
  parameter INPUT_SIZE_2 = 32,
  parameter INPUT_SIZE_3 = 32,
  parameter OUTPUT_SIZE = 32
)
(
    input clk,
    input rst,

    output cs,
    output sclk,
    output mosi,
    input miso,

    /*UUT ctrl signals*/
    output rst_uut,
    output start_uut,
    output ctrl_mux_uut,
    input end_uut,
    input err_uut,
    /*inputs to UUT*/
    output [INPUT_SIZE_1-1:0] input_to_UUT_1,
    output [INPUT_SIZE_2-1:0] input_to_UUT_2,
    output [INPUT_SIZE_3-1:0] input_to_UUT_3,
    /*outputs from UUT*/


    output clk_uut,

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


  logic [1:0] clk_sel;

  gen_clk_uut gen_clk_inst(
    .clk(clk),
    .rst(rst),
    .clk_uut(clk_uut),
    .clk_sel(clk_sel)
  );
  

  fsm_autotest #(
    .INPUT_SIZE_1(INPUT_SIZE_1),
    .INPUT_SIZE_2(INPUT_SIZE_2),
    .INPUT_SIZE_3(INPUT_SIZE_3),
    .OUTPUT_SIZE(OUTPUT_SIZE)
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
    .err_uut(err_uut),
    .start_uut(start_uut),
    .ctrl_mux_uut(ctrl_mux_uut),
    .clk_uut_sel(clk_sel),
    //uut paramters signals
    .input_to_UUT_1(input_to_UUT_1),
    .input_to_UUT_2(input_to_UUT_2),
    .input_to_UUT_3(input_to_UUT_3),
    //uut results signals
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
    .sclk_speed(4'h1),
    
    .debug()
  );

endmodule : autotest_module


module gen_clk_uut(
  input clk,
  input rst,
  output clk_uut,
  input [1:0] clk_sel
);


  logic clk_1;
  logic clk_2;
  logic clk_max;
  
  clk_wiz_0 clk_gen(
    // Clock out ports
    .clk_out1(clk_max),
  // Status and control signals
    .reset(rst),
 // Clock in ports
    .clk_in1(clk)
  );
  
  logic [7:0] counter_o;
  
  logic clk_alt;
  assign clk_alt = clk_sel[0] == 0 ? counter_o[1] : counter_o[0] ;
  
  counter #(.DATA_WIDTH(8)) counter_clk(
    .clk(clk_max),
    .rst(rst),
    .up(1'b1),
    .down(1'b0),
    .din(8'h0),
    .dout(counter_o)
  );

  
  BUFGMUX BUFGMUX_inst1(
    .I0(clk_alt),
    .I1(clk_max),
    .O(clk_uut),
    .S(clk_sel[1])
  );
  
  
endmodule : gen_clk_uut