/**
 * @Author: German Cano Quiveu <germancq>
 * @Date:   2019-03-01T13:04:23+01:00
 * @Email:  germancq@dte.us.es
 * @Filename: top.v
 * @Last modified by:   germancq
 * @Last modified time: 2019-03-30T19:54:22+01:00
 */


localparam N_BLOCK_SIZE = 32;
localparam SCLK_SPEED_SIZE = 5;
localparam CMD18_SIZE = 1;
localparam START_BLOCK = 32'h0x100000;
localparam CLK_INTERNAL_DIVIDER = 17;


module top(
  input sys_clk_pad_i,
  input center_button,

  input [15:0] switch_i,
  output [15:0] leds_o,

  output [6:0] seg,
  output [7:0] AN,

  output cs,
  output sclk,
  output mosi,
  input miso,
  output SD_RESET,
  output SD_DAT_1,
  output SD_DAT_2
);


 

  logic [31:0] debug_data;
  display #(.N(32),.CLK_HZ(100000000)) display_inst(
    .clk(sys_clk_pad_i),
    .rst(center_button),
    .din(debug_data),
    .an(AN),
    .seg(seg)
  );


  assign SD_RESET = 1'b0;
  assign SD_DAT_1 = 1'b1;
  assign SD_DAT_2 = 1'b1;


  logic cs_autotest;
  logic sclk_autotest;
  logic mosi_autotest;
  logic SD_RESET_autotest;
  logic SD_DAT_1_autotest;
  logic SD_DAT_2_autotest;

  logic uut_ctrl_mux;
  logic uut_rst;
  logic uut_start;
  logic [N_BLOCK_SIZE-1:0] uut_n_blocks;
  logic [SCLK_SPEED_SIZE-1:0] uut_sclk_speed;
  logic [CMD18_SIZE-1:0] uut_cmd18;
  logic uut_finish;

  autotest_module autotest_inst(
    .clk(sys_clk_pad_i),
    .rst(center_button),

    .cs(cs_autotest),
    .sclk(sclk_autotest),
    .mosi(mosi_autotest),
    .miso(miso),

    .uut_ctrl_mux(uut_ctrl_mux),
    .uut_rst(uut_rst),
    .uut_start(uut_start),
    //uut paramters signals
    .uut_n_blocks(uut_n_blocks),
    .uut_sclk_speed(uut_sclk_speed),
    .uut_cmd18(uut_cmd18),
    //uut results signals
    .uut_finish(uut_finish),

    .debug(debug_data)

  );

  logic cs_uut;
  logic sclk_uut;
  logic mosi_uut;
  logic SD_RESET_uut;
  logic SD_DAT_1_uut;
  logic SD_DAT_2_uut;

  sdspi_system uut(
    .clk(sys_clk_pad_i),
    .rst(uut_rst),

    .start(uut_start),
    .finish(uut_finish),


    .n_blocks(uut_n_blocks),
    .cmd18(uut_cmd18),
    .sclk_speed(uut_sclk_speed),

    .sclk(sclk_uut),
    .cs(cs_uut),
    .mosi(mosi_uut),
    .miso(miso)
  );


  mux #(.DATA_WIDTH(1)) mux_sclk(
    .a(sclk_autotest),
   	.b(sclk_uut),
   	.c(sclk),
   	.sel(uut_ctrl_mux)
  );
  mux #(.DATA_WIDTH(1)) mux_mosi(
    .a(mosi_autotest),
   	.b(mosi_uut),
   	.c(mosi),
   	.sel(uut_ctrl_mux)
  );
  mux #(.DATA_WIDTH(1)) mux_cs(
    .a(cs_autotest),
   	.b(cs_uut),
   	.c(cs),
   	.sel(uut_ctrl_mux)
  );

endmodule
