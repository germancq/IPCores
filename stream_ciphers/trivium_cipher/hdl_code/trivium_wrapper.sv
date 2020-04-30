/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2019-10-09 12:15:55
 * @ Modified by: Your name
 * @ Modified time: 2020-04-30 21:36:51
 * @ Description:
 */


module trivium_wrapper #(parameter DATA_WIDTH = 80)(
    input clk,
    input rst,
    input [79:0] key,
    input [79:0] iv,
    input next_data,
    output logic end_block,
    output [DATA_WIDTH-1:0] block_o

);


    logic [DATA_WIDTH-1:0] reg_in;
    logic shift_right;
    assign reg_in = 0;

    logic key_stream;
    logic trivium_en;
    logic warm_up_complete;

    logic [$clog2(DATA_WIDTH) - 1 : 0] counter_out;
    logic [$clog2(DATA_WIDTH) - 1 : 0] counter_in;
    logic counter_up;
    logic [$clog2(DATA_WIDTH) - 1 : 0] stop_value;
    assign counter_in = 0;
    logic load_reg;

    shift_register #(.DATA_WIDTH(DATA_WIDTH)) reg_impl(
        .clk(clk),
        .cl(1'b0),
        .shift_right(shift_right),
        .shift_left(1'b0),
        .load(rst | load_reg),
        .input_bit(key_stream),
        .din(reg_in),
        .output_bit(),
        .dout(block_o)
    );


    trivium trivium_impl(
        .clk(clk),
        .rst(rst),
        .en(trivium_en),
        .key(key),
        .iv(iv),
        .warm_up_complete(warm_up_complete),
        .key_stream(key_stream)
    );

    logic counter_rst;

    counter #(.DATA_WIDTH($clog2(DATA_WIDTH))) counter_impl(
        .clk(clk),
        .rst(rst | counter_rst),
        .up(counter_up),
        .down(1'b0),
        .din(counter_in),
        .dout(counter_out)
    );

    typedef enum logic [1:0] {IDLE,WARM_UP_PHASE,TRIVIUM_KEYSTREAM,END} state_t;
    state_t current_state, next_state;

    

    always_comb begin

        next_state = current_state;

        counter_up = 0;
        shift_right = 0;
        trivium_en = 0;
        end_block = 0;
        counter_rst = 0;
        load_reg = 0;
        

        case(current_state)
            IDLE : 
                begin
                    next_state = WARM_UP_PHASE;
                    counter_rst = 1'b1;
                    
                end
            WARM_UP_PHASE :
                begin
                    trivium_en = 1'b1;
                    if(warm_up_complete) begin
                        next_state = TRIVIUM_KEYSTREAM;
                        shift_right = 1'b1;
                    end
                end 
            TRIVIUM_KEYSTREAM :
                begin
                    counter_up = 1'b1;
                    shift_right = 1'b1;
                    trivium_en = 1'b1;
                    if(counter_out == DATA_WIDTH-2) begin
                        next_state = END;
                    end
                end             
            END :
                begin
                    
                    end_block = 1'b1;
                    counter_rst = 1'b1;
                    if(next_data == 1'b1) begin
                        //load_reg = 1;
                        next_state = TRIVIUM_KEYSTREAM;
                        trivium_en = 1'b1;
                        shift_right = 1'b1;
                    end
                    
                end    

        endcase
    end


    always_ff @(posedge clk) begin
        if (rst) begin
            current_state <= IDLE;
        end
        else begin
            current_state <= next_state;
        end
    end

endmodule : trivium_wrapper