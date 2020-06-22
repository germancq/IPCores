/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-06-22 19:31:46
 * @ Modified by: Your name
 * @ Modified time: 2020-06-22 22:27:29
 * @ Description:
 */

module hmac_spongent #(
    parameter N = 256,
    parameter c = 256,
    parameter r = 16,
    parameter R = 140,
    parameter lCounter_initial_state = 8'h9E,
    parameter lCounter_feedback_coeff = 9'h11D,
    parameter KEY_WIDTH=64,
    parameter INPUT_WIDTH = 64
)
(
    input clk,
    input rst,
    input [KEY_WIDTH-1:0] key,
    input [INPUT_WIDTH-1:0] msg,
    output [N-1:0] digest,
    output end_hmac
    
);


    logic [N-1:0] ipad;
    logic [N-1:0] opad;
    assign ipad = {(N>>3){8'b00110110}};
    assign opad = {(N>>3){8'b01011100}};

    
    logic [N-1:0] Si;
    logic [N-1:0] So;
    logic [N-1:0] hash_output_0;
    logic end_hash_0;

    assign Si = key ^ ipad;
    assign So = key ^ opad;

    spongent #(
        .N(N),
        .c(c),
        .r(r),
        .R(R),
        .lCounter_feedback_coeff(lCounter_feedback_coeff),
        .lCounter_initial_state(lCounter_initial_state),
        .DATA_WIDTH(N+INPUT_WIDTH)
    )
    hash_0(
        .clk(clk),
        .rst(rst),
        .msg({Si,msg}),
        .hash(hash_output_0),
        .end_hash(end_hash_0)
    );

    spongent #(
        .N(N),
        .c(c),
        .r(r),
        .R(R),
        .lCounter_feedback_coeff(lCounter_feedback_coeff),
        .lCounter_initial_state(lCounter_initial_state),
        .DATA_WIDTH((N<<1))
    )
    hash_1(
        .clk(clk),
        .rst(~end_hash_0),
        .msg({So,hash_output_0}),
        .hash(digest),
        .end_hash(end_hmac)
    );

endmodule : hmac_spongent