/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-07-09 15:46:42
 * @ Modified by: Your name
 * @ Modified time: 2021-04-16 17:10:33
 * @ Description:
 */
module hmac_spongent_iter #(
    parameter N = 256,
    parameter c = 256,
    parameter r = 16,
    parameter R = 140,
    parameter lCounter_initial_state = 8'h9E,
    parameter lCounter_feedback_coeff = 9'h11D,
    parameter KEY_WIDTH=64
)(
    input clk,
    input rst,
    input [r-1:0] feed_data,
    input data_ready,
    input stop_feed,
    output logic busy,
    input [KEY_WIDTH-1:0] key,
    output [N-1:0] digest,
    output logic end_hmac
);

    logic [N-1:0] ipad;
    logic [N-1:0] opad;
    logic [N-1:0] Si;
    logic [N-1:0] So;
    assign ipad = {(N>>3){8'b00110110}};
    assign opad = {(N>>3){8'b01011100}};
    assign Si = key ^ ipad;
    assign So = key ^ opad;

    logic rst_hash;
    logic busy_hash;
    logic [N-1:0] hash_result;
    logic [r-1:0] feed_data_hash;
    logic data_ready_hash;
    logic start_hash;
    logic end_hash;
    assign digest = hash_result;
    spongent_iter #(
        .N(N),
        .c(c),
        .r(r),
        .R(R),
        .lCounter_feedback_coeff(lCounter_feedback_coeff),
        .lCounter_initial_state(lCounter_initial_state)
    )hash_impl(
        .clk(clk),
        .rst(rst_hash),
        .data_input(feed_data_hash),
        .data_ready(data_ready_hash),
        .start_hash(start_hash),
        .busy(busy_hash),
        .end_hash(end_hash),
        .digest(hash_result)
    );

    logic rst_counter_n;
    logic up_counter_n;
    logic [$clog2(N>>$clog2(r))-1:0] counter_n_o;

    counter #(.DATA_WIDTH($clog2(N>>$clog2(r)))) counter_N(
        .clk(clk),
        .rst(rst_counter_n),
        .up(up_counter_n),
        .down(1'b0),
        .din({$clog2(N>>$clog2(r)){1'b0}}),
        .dout(counter_n_o)
    );


    logic reg_feed_data_cl;
    logic reg_feed_data_w;
    logic [r-1:0] reg_feed_data_din;
    register #(.DATA_WIDTH(r)) register_feed_data(
        .clk(clk),
        .cl(reg_feed_data_cl),
        .w(reg_feed_data_w),
        .din(reg_feed_data_din),
        .dout(feed_data_hash)  
    );

    logic reg_hash_result_cl;
    logic reg_hash_result_w;
    logic [N-1:0] reg_hash_result_o;
    register #(.DATA_WIDTH(N)) register_hash_result(
        .clk(clk),
        .cl(reg_hash_result_cl),
        .w(reg_hash_result_w),
        .din(hash_result),
        .dout(reg_hash_result_o)  
    );

    logic[3:0] current_state;
    logic[3:0] next_state;

    logic [3:0] reg_state_prev;
    logic r_state_prev_cl;
    logic r_state_prev_w;
    register #(.DATA_WIDTH(4)) r_state_prev_0(
        .clk(clk),
        .cl(r_state_prev_cl),
        .w(r_state_prev_w),
        .din(current_state),
        .dout(reg_state_prev)
    );


    localparam IDLE = 4'h0;
    localparam PREAMBULE_Si_STAGE_1 = 4'h1;
    localparam PREAMBULE_Si_STAGE_2 = 4'h2;
    localparam PREAMBULE_Si_STAGE_3 = 4'h3;
    localparam HMAC_FEED_STAGE_1 = 4'h4;
    localparam HMAC_FEED_STAGE_2 = 4'h5;
    localparam RST_HASH = 4'h6;
    localparam PREAMBULE_So_STAGE_1 = 4'h7;
    localparam PREAMBULE_So_STAGE_2 = 4'h8;
    localparam PREAMBULE_So_STAGE_3 = 4'h9;
    localparam FEED_HMAC_HASH_STAGE_1 = 4'hA;
    localparam FEED_HMAC_HASH_STAGE_2 = 4'hB;
    localparam FEED_HMAC_HASH_STAGE_3 = 4'hC;
    localparam END_STATE = 4'hD;
    localparam WAIT_HASH_RESULT = 4'hE;
    localparam FEED_HASH = 4'hF;
    //localparam FEED_HASH_2 = 5'h10;
    //localparam FEED_HASH_3 = 5'h11;



    always_comb begin
        
        next_state = current_state;

        busy = 1;

        end_hmac = 0;

        rst_hash = 0;
        data_ready_hash = 0;
        start_hash = 0;

        rst_counter_n = 0;
        up_counter_n = 0;

        reg_feed_data_cl = 0;
        reg_feed_data_w = 0;
        reg_feed_data_din = feed_data;

        reg_hash_result_cl = 0;
        reg_hash_result_w = 0;

        r_state_prev_cl = 0;
        r_state_prev_w = 0;

        case (current_state)
            IDLE: begin
                busy = 0;
                rst_counter_n = 1;
                reg_feed_data_cl = 1;
                rst_hash = 1;
                r_state_prev_cl = 1;
                reg_hash_result_cl = 1;
                if(data_ready == 1) begin
                    next_state = PREAMBULE_Si_STAGE_1;
                end
            end 
            PREAMBULE_Si_STAGE_1: begin
                reg_feed_data_din = Si >> (N - r - (counter_n_o<<($clog2(r))));
                reg_feed_data_w = 1;
                next_state = PREAMBULE_Si_STAGE_2;
            end
            PREAMBULE_Si_STAGE_2: begin
                r_state_prev_w = 1;
                next_state = FEED_HASH;
            end
            PREAMBULE_Si_STAGE_3: begin
                if(counter_n_o == (N>>($clog2(r)))-1) begin
                    next_state = HMAC_FEED_STAGE_1;
                end 
                else begin
                    up_counter_n = 1;
                    next_state = PREAMBULE_Si_STAGE_1;
                end        
            end
            HMAC_FEED_STAGE_1:begin
                reg_feed_data_w = 1;
                r_state_prev_w = 1;
                next_state = FEED_HASH;
            end
            HMAC_FEED_STAGE_2:begin
                busy = 0;
                if(stop_feed == 1) begin
                    start_hash = 1;
                    r_state_prev_w = 1;
                    next_state = WAIT_HASH_RESULT;
                end
                else if(data_ready == 1) begin
                    next_state = HMAC_FEED_STAGE_1;
                end
            end
            RST_HASH: begin
                rst_hash = 1;
                rst_counter_n = 1;
                next_state = PREAMBULE_So_STAGE_1;
            end
            PREAMBULE_So_STAGE_1: begin
                reg_feed_data_din = So >> (N - r - (counter_n_o<<($clog2(r))));
                reg_feed_data_w = 1;
                next_state = PREAMBULE_So_STAGE_2;
            end
            PREAMBULE_So_STAGE_2: begin
                r_state_prev_w = 1;
                next_state = FEED_HASH;
            end
            PREAMBULE_So_STAGE_3: begin
                if(counter_n_o == (N>>($clog2(r)))-1) begin
                    rst_counter_n = 1;
                    next_state = FEED_HMAC_HASH_STAGE_1;
                end 
                else begin
                    up_counter_n = 1;
                    next_state = PREAMBULE_So_STAGE_1;
                end        
            end
            FEED_HMAC_HASH_STAGE_1: begin
                reg_feed_data_din = reg_hash_result_o >> (N - r - (counter_n_o<<($clog2(r))));
                reg_feed_data_w = 1;
                next_state = FEED_HMAC_HASH_STAGE_2;
            end
            FEED_HMAC_HASH_STAGE_2: begin
                r_state_prev_w = 1;
                next_state = FEED_HASH;
            end
            FEED_HMAC_HASH_STAGE_3: begin
                if(counter_n_o == (N>>($clog2(r)))-1) begin
                    rst_counter_n = 1;
                    start_hash = 1;
                    r_state_prev_w = 1;
                    next_state = WAIT_HASH_RESULT;
                end 
                else begin
                    up_counter_n = 1;
                    next_state = FEED_HMAC_HASH_STAGE_1;
                end        
            end
            END_STATE:begin
                busy = 0;
                end_hmac = 1;
            end
            WAIT_HASH_RESULT:begin
                start_hash = 1;
                if(end_hash == 1) begin
                    reg_hash_result_w = 1;
                    next_state = reg_state_prev + 1;
                end    
            end
            FEED_HASH: begin
                if(busy_hash == 0) begin
                    data_ready_hash = 1;
                    next_state = reg_state_prev + 1;
                end    
            end
            /*
            FEED_HASH_2: begin
                if(busy_hash == 1) begin
                    next_state = FEED_HASH_3;
                end    
            end
            FEED_HASH_3: begin
                if(busy_hash == 0) begin
                    next_state = reg_state_prev + 1;
                end    
            end
            */
            default: ;
        endcase
        
    end

    always_ff @(posedge clk) begin
        if(rst==1) begin
            current_state <= IDLE;
        end
        else begin
            current_state <= next_state;
        end
    end

endmodule : hmac_spongent_iter