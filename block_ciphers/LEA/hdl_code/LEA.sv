/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2023-05-04 16:06:30
 * @ Modified by: German Cano Quiveu, germancq
 * @ Modified time: 2023-10-20 16:47:59
 * @ Description:
 */


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




    logic r_w_roundkeys;
    logic [4:0] addr_roundkeys;
    logic [191:0] din_roundkeys;
    logic [191:0] dout_roundkeys;

    logic [4:0] addr_roundkeys_ks;
    logic [4:0] addr_roundkeys_crypto;

    logic r_w_roundkeys_ks;
    logic r_w_roundkeys_crypto;


    mux #(.DATA_WIDTH(5)) mux_roundkeys_addr(
        .a(addr_roundkeys_ks),
        .b(addr_roundkeys_crypto),
        .sel(end_key_generation),
        .c(addr_roundkeys)
    );

    mux #(.DATA_WIDTH(1)) mux_roundkeys_rw(
        .a(r_w_roundkeys_ks),
        .b(r_w_roundkeys_crypto),
        .sel(end_key_generation),
        .c(r_w_roundkeys)
    );

    memory_module #(.ADDR(5),.DATA_WIDTH(192)) roundkeys_mem(
        .clk(clk),
        .r_w(r_w_roundkeys),
        .addr(addr_roundkeys),
        .din(din_roundkeys),
        .dout(dout_roundkeys)
    );

    key_schedule #(.KEY_LEN(KEY_LEN)) key_sch(
        .clk(clk),
        .rst(rst),
        .key(key),
        .roundkeys_addr(addr_roundkeys_ks),
        .roundkeys_din(din_roundkeys),
        .roundkeys_rw(r_w_roundkeys_ks),
        .end_key_generation(end_key_generation)
    );
    
endmodule : LEA


module key_schedule #(
    parameter KEY_LEN = 128
)
(
    input clk,
    input rst,
    input [KEY_LEN-1:0] key,
    output logic [4:0] roundkeys_addr,
    output logic [191:0] roundkeys_din,
    output logic roundkeys_rw,
    output logic end_key_generation
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

    logic [5:0] index_rol [5:0];
    assign index_rol[0] = 1;
    assign index_rol[1] = 3;
    assign index_rol[2] = 6;
    assign index_rol[3] = 11;
    assign index_rol[4] = 13;
    assign index_rol[5] = 17;

    genvar i;
    logic [31:0] T_din [7:0];
    logic [31:0] T_dout [7:0];
    logic [0:0] T_w [7:0];
    logic [0:0] T_cl [7:0];
    generate
        for (i = 0; i<(KEY_LEN>>5); i++) begin
            register #(.DATA_WIDTH(32)) r_T_i(
                .clk(clk),
                .cl(T_cl[i]),
                .w(T_w[i]),
                .din(T_din[i]),
                .dout(T_dout[i])
            );
        end
    endgenerate

    logic [KEY_LEN-1:0] key_reorder;
    generate   
        for (i = 0;i<(KEY_LEN>>5);i++) begin
            assign key_reorder[31+(i<<5):(i<<5)] = order_word(key[31+(i<<5):(i<<5)]);
        end
    endgenerate

    logic [31:0] key_reorder_words [(KEY_LEN>>5)-1:0];
    generate
        for(i=0;i<(KEY_LEN>>5);i++) begin
            assign key_reorder_words[i] = key_reorder[31+(i<<5):(i<<5)];
        end
    endgenerate

    //round key counter
    logic rk_counter_rst;
    logic rk_counter_down;
    logic [4:0] rk_counter_din;
    logic [4:0] rk_counter_dout;

    generate
        case(KEY_LEN)
            128: begin
                assign rk_counter_din = 24;
            end
            192: begin
                assign rk_counter_din = 28;
            end
            256: begin
                assign rk_counter_din = 32;
            end
            default: begin
                assign rk_counter_din = 24;
            end
        endcase
    endgenerate

    //assign rk_counter_din = (KEY_LEN == 128) ? 5'd23 : ((KEY_LEN == 192) ? 5'd27 : 5'd31)  


    counter #(.DATA_WIDTH(5)) roundkey_counter(
        .clk(clk),
        .rst(rk_counter_rst),
        .up(0),
        .down(rk_counter_down),
        .din(rk_counter_din),
        .dout(rk_counter_dout)
    );
    
    // idle, espera start o reset a 0
    // check final de cuenta
    // crea T's
    //almacena RKi
    //vuelve a check final
    logic [3:0] next_state;
    logic [3:0] current_state;

    localparam IDLE = 0;
    localparam CHECK_ROUND = 1;
    localparam CALCULATE_T_STEP1 = 2;
    localparam CALCULATE_T_STEP2 = 3;
    localparam STORE_RK = 4;
    localparam UPDATE_COUNTER = 5;
    localparam END_STATE = 6;

    //auxiliar var
    logic [31:0] j;
    logic [31:0] k;
    logic [31:0] l;
    always_comb begin
        next_state = current_state;

        roundkeys_din = 0;
        roundkeys_addr = 0;
        roundkeys_rw = 0;
        
        for (j =0 ;j<(KEY_LEN>>5) ;j++ ) begin
            T_w[j] = 0;
            T_cl[j] = 0;
            T_din[j] = 32'h0;
        end

        rk_counter_rst = 0;
        rk_counter_down = 0;

        end_key_generation = 0;

        case(current_state)
            IDLE:
                begin
                    //valores iniciales de T
                    rk_counter_rst = 1;
                    
                    for (j=0 ;j<(KEY_LEN<<5) ;j++ ) begin
                        T_w[j]=1;
                        T_din[j] = key_reorder_words[j];              
                    end
                    
                    next_state = CHECK_ROUND;
                end
            CHECK_ROUND:
                begin
                    next_state = CALCULATE_T_STEP1;
                    if(rk_counter_dout == 0) begin
                        next_state = END_STATE;
                    end
                end
            CALCULATE_T_STEP1:
                begin
                    
                    //calculo de T's segun KEY_LEN
                    for (j = 0;j<(KEY_LEN>>5) ;j++ ) begin

                        k = cte[(rk_counter_din-rk_counter_dout)%(KEY_LEN>>5)]<<((rk_counter_din-rk_counter_dout)+j);
                        l = cte[(rk_counter_din-rk_counter_dout)%(KEY_LEN>>5)]>>(32-(rk_counter_din-rk_counter_dout+j));
                        
                        T_din[j] = T_dout[j] + (k|l);
                        
                        
                        T_w[j] = 1;
                    end

                    next_state = CALCULATE_T_STEP2;
                end
            CALCULATE_T_STEP2:
                begin
                    
                    for (j = 0;j<(KEY_LEN>>5) ;j++ ) begin
                        

                        T_din[j] = T_dout[j]<<(index_rol[j]) | T_dout[j]>>(32-index_rol[j]);
                        
                        T_w[j] = 1;
                    end
                    /*
                    for (j = 0;j<8 ;j++ ) begin
                        if(KEY_LEN == 128) begin
                            T_din[j] = {T_dout[j][31-index_rol[j]],T_dout[j][31:32-index_rol[j]]};
                            T_w[j] = 1;
                        end
                        else if(KEY_LEN == 192) begin
                            
                        end
                        else begin
                            
                        end
                    end
                    */
                    next_state = STORE_RK;
                end
            STORE_RK:
                begin
                    if(KEY_LEN == 128) begin
                        
                        roundkeys_din = {T_dout[0],T_dout[1],T_dout[2],T_dout[1],T_dout[3],T_dout[1]};
                    end
                    else if(KEY_LEN == 192) begin
                        roundkeys_din = {T_dout[0],T_dout[1],T_dout[2],T_dout[3],T_dout[4],T_dout[5]};
                    end
                    else begin
                        roundkeys_din = {
                            T_dout[((rk_counter_din-rk_counter_dout)*6) % 8],
                            T_dout[((rk_counter_din-rk_counter_dout)*6)+1 % 8],
                            T_dout[((rk_counter_din-rk_counter_dout)*6)+2 % 8],
                            T_dout[((rk_counter_din-rk_counter_dout)*6)+3 % 8],
                            T_dout[((rk_counter_din-rk_counter_dout)*6)+4 % 8],
                            T_dout[((rk_counter_din-rk_counter_dout)*6)+5 % 8]
                        };
                    end
                    roundkeys_addr = (rk_counter_din-rk_counter_dout);
                    roundkeys_rw = 1;
                    next_state = UPDATE_COUNTER;
                end
            UPDATE_COUNTER:
                begin
                    rk_counter_down = 1;
                    next_state = CHECK_ROUND;
                end    
            END_STATE:
                begin
                    end_key_generation = 1;
                end
            default:;
        endcase
    end    

    always_ff @( posedge clk ) begin
        if(rst) begin
            current_state <= IDLE;
        end
        else begin
            current_state <= next_state;
        end 
    end
    

endmodule: key_schedule


