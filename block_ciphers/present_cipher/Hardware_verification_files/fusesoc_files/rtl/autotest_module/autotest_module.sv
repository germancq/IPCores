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
    input  end_key_signal_uut,
    input  end_dec_uut,
    input  end_enc_uut,

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
  logic spi_crc_err;




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
    .spi_crc_err(spi_crc_err),
    //uut ctrl signals
    .rst_uut(rst_uut),
    //uut paramters signals
    .block_i_uut(block_i_uut),
    .key_uut(key_uut),
    .encdec_uut(encdec_uut),
    //uut results signals
    .block_o_uut(block_o_uut),
    .end_key_signal_uut(end_key_signal_uut),
    .end_dec_uut(end_dec_uut),
    .end_enc_uut(end_enc_uut),
    //debug
    .sw_debug(sw_debug),
    .debug_signal(debug)
  );


  sdspihost sdspi_inst(
    .clk(clk),
    .reset(spi_rst),
    .busy(spi_busy),
    .err(spi_err),
    .crc_err(spi_crc_err),

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
