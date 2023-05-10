/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2023-05-04 16:06:30
 * @ Modified by: German Cano Quiveu, germancq
 * @ Modified time: 2023-05-10 14:32:03
 * @ Description:
 */

package common_functions;

    function logic[31:0] order_word(input logic[31:0] word);
        return {word[7:0],word[15:8],word[23:16],word[31:24]};
    endfunction : order_word
    
endpackage : common_functions
 

import common_functions::*;

module LEA #(
    parameter KEY_LEN = 128
) (
    input clk,
    input rst,
    input [KEY_LEN-1:0] key,
    input [127:0] block_i,
    output [127:0] block_o,
    input rq_data,
    output end_key_generation,
    output end_signal

);
    key_schedule #(.KEY_LEN(KEY_LEN)) impl(
        .clk(clk),
        .rst(rst),
        .key(key),
        .roundkeys(),
        .end_key_generation()
    );
    
endmodule : LEA


module key_schedule #(
    parameter KEY_LEN = 128
)
(
    input clk,
    input rst,
    input [KEY_LEN-1:0] key,
    output [191:0] roundkeys [31:0],
    output end_key_generation
);

    logic [31:0] cte [7:0];
    assign cte[0] = 32'hc3efe9db;
    assign cte[1] = 32'h44626b02;
    assign cte[2] = 32'h79e27c8a;
    assign cte[3] = 32'h78df30ec;
    assign cte[4] = 32'h715ea49e;
    assign cte[5] = 32'hc785da0a;
    assign cte[6] = 32'he04ef22a;
    assign cte[7] = 32'he5c40957;

    logic [KEY_LEN-1:0] key_reorder;
    generate
        genvar i;
        for (i = 0;i<(KEY_LEN>>3);i++) begin
            assign key_reorder[31+(i<<5):(i<<5)] = order_word(key[31+(i<<5):(i<<5)]);
        end
    endgenerate
    
    // idle, espera start o reset a 0
    // check final de cuenta
    // crea T's
    //almacena RKi
    //vuelve a check final
    always_comb begin
        
        
    end    
    

endmodule: key_schedule


