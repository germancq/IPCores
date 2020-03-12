/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2019-10-01 16:32:35
 * @ Modified by: Your name
 * @ Modified time: 2020-03-12 17:20:47
 * @ Description:
 */




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

    input [3:0] switch_i,
    output [15:0] leds_o
);




  assign SD_RESET = 1'b0;
  assign SD_DAT_1 = 1'b1;
  assign SD_DAT_2 = 1'b1;

logic rst_uut;
logic [63:0] block_i;
logic [79:0] key;
logic enc_dec;
logic end_key_generation;
logic [63:0] block_o;
logic end_dec;
logic end_enc;
logic clk_uut; 


logic [31:0] debug_data;
  display #(.N(32),.CLK_HZ(100000000)) display_inst(
    .clk(sys_clk_pad_i),
    .rst(rst),
    .din(debug_data),
    .an(AN),
    .seg(seg)
  );

autotest_module autotest_impl(
    .clk(sys_clk_pad_i),
    .rst(rst),

    .cs(cs),
    .sclk(sclk),
    .mosi(mosi),
    .miso(miso),
    

    /*UUT signals*/
    .rst_uut(rst_uut),
    .block_i_uut(block_i),
    .key_uut(key),
    .encdec_uut(enc_dec),
    .block_o_uut(block_o),
    .end_key_signal_uut(end_key_generation),
    .end_dec_uut(end_dec),
    .end_enc_uut(end_enc),

    .clk_sel(switch_i[3:2]),
    .clk_uut(clk_uut),

    .sw_debug(switch_i[1:0]),
    .debug(debug_data)
);

present present_impl(
    .clk(clk_uut),
    .rst(rst_uut),
    .enc_dec(enc_dec),
    .key(key),
    .block_i(block_i),
    .end_key_generation(end_key_generation),
    .block_o(block_o),
    .end_dec(end_dec),
    .end_enc(end_enc)
);

endmodule : top