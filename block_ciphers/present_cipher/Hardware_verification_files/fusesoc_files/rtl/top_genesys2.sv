/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2019-10-01 16:32:35
 * @ Modified by: Your name
 * @ Modified time: 2021-01-12 21:39:07
 * @ Description:
 */




module top(
    input sysclk_n,
    input sysclk_p,
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

    input [1:0] switch_i
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
logic end_signal;

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
    .end_uut(end_signal),

    
    
    .sw_debug(switch_i),
    .debug(debug_data)
);

present present_impl(
    .clk(sys_clk_pad_i),
    .rst(rst_uut),
    .enc_dec(enc_dec),
    .key(key),
    .block_i(block_i),
    .end_key_generation(end_key_generation),
    .rq_data(1'b0),
    .block_o(block_o),
    .end_signal(end_signal)
);

endmodule : top