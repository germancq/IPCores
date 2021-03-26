/**
 * @Author: German Cano Quiveu <germancq>
 * @Date:   2019-03-01T15:43:26+01:00
 * @Email:  germancq@dte.us.es
 * @Filename: autotest_module.v
 * @Last modified by:   germancq
 * @Last modified time: 2019-03-05T13:36:26+01:00
 */


module autotest_module
(
    input clk,
    input rst,

    output cs,
    output sclk,
    output mosi,
    input miso,

    /*UUT signals*/
    output rst_uut,
    output [64-1:0] block_i_uut,
    output [80-1:0] key_uut,
    output encdec_uut,
    input [64-1:0] block_o_uut,
    input  end_uut,

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


  fsm_autotest fsm_isnt(
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

    .clk_uut_sel(clk_sel),
    //uut ctrl signals
    .rst_uut(rst_uut),
    //uut paramters signals
    .block_i_uut(block_i_uut),
    .key_uut(key_uut),
    .encdec_uut(encdec_uut),
    //uut results signals
    .block_o_uut(block_o_uut),
    .end_uut(end_uut),

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
    .sclk_speed(4'h1), //25 MHz in a 100Mhz clk_system
    
    .debug()
  );

endmodule : autotest_module


module gen_clk_uut(
  input clk,
  input rst,
  output clk_uut,
  input [1:0] clk_sel
);


  logic clk_out1;
  logic clk_out2;
  logic clk_out3;
  logic clk_out4;
  logic clk_out5;
  logic clk_out6;
  logic clk_out7;
  logic clk_fb;
  
  clk_wiz_0 clk_gen(
    // Clock out ports
    .clk_out1(clk_out1),
    .clk_out2(clk_out2),
    .clk_out3(clk_out3),
    .clk_out4(clk_out4),
    .clk_out5(clk_out5),
    .clk_out6(clk_out6),
    .clk_out7(clk_out7),
    .clkfb_out(clk_fb),
  // Status and control signals
    .reset(rst),
 // Clock in ports
    .clkfb_in(clk_fb),
    .clk_in1(clk)
  );
  /*
  logic [7:0] counter_o;
  
  logic clk_100_200;
  assign clk_100_200 = clk_sel[0] == 0 ? counter_o[1] : counter_o[0] ;
  
  counter #(.DATA_WIDTH(8)) counter_clk(
    .clk(clk_400),
    .rst(rst),
    .up(1'b1),
    .down(1'b0),
    .din(8'h0),
    .dout(counter_o)
  );
*/
  
//  logic clk_125_225;
//  assign clk_125_225 = clk_sel[0] == 0 ? clk_225 : clk_125 ;
//  logic clk_375_450;
//  assign clk_375_450 = clk_sel[0] == 0 ? clk_450 : clk_375 ;

  logic  clk_mux;
  mux_4 #(.DATA_WIDTH(1)) clkMux(
    .a(clk_out4),
    .b(clk_out5),
    .c(clk_out6),
    .d(clk_out7),
    .e(clk_mux),
    .sel(clk_sel)
  );

  BUFG clk_buffer(
    .O(clk_uut),
    .I(clk_mux)
  );
  /* 
  BUFGMUX BUFGMUX_inst1(
    .I0(clk_375_450),
    .I1(clk_125_225),
    .O(clk_uut),
    .S(clk_sel[1])
  );
  */
  
endmodule : gen_clk_uut