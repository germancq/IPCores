/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-06-24 18:09:55
 * @ Modified by: Your name
 * @ Modified time: 2020-06-29 16:48:12
 * @ Description:
 */

 /*
    prepare data input
    wait until busy = 0 then raise data_ready = 1
    loop until the last data is loaded
    wait until busy = 0
    raise start_hash = 1 for at least 1 cycle
    wait until both busy = 0 and end_hash = 1
    put start_hash = 0
 */

module spongent_iter #(
    parameter N = 256,
    parameter c = 256,
    parameter r = 16,
    parameter R = 140,
    parameter lCounter_initial_state = 8'h9E,
    parameter lCounter_feedback_coeff = 9'h11D
)
(
    input clk,
    input rst,
    input [r-1:0] data_input,
    input data_ready,
    input start_hash, 
    output logic busy,
    output logic end_hash,
    output [N-1:0] digest
);

    localparam b = c+r;

    logic rst_lCounter;
    logic shift_lCounter;
    logic [$clog2(R)-1:0] lCounter_state;

    LFSR #(.DATA_WIDTH($clog2(R))) lCounter(
        .clk(clk),
        .rst(rst_lCounter),
        .shift(shift_lCounter),
        .feedback_coeff(lCounter_feedback_coeff),
        .initial_state(lCounter_initial_state),
        .state(lCounter_state)
    );

    logic [b-1:0] permutation_state;
    logic [b-1:0] permutation_initial_state;
    logic rst_permutation;
    logic end_permutation;

    permutation #(.DATA_WIDTH(b),.R(R)) permutation_impl(
        .clk(clk),
        .rst(rst_permutation),
        .initial_state(permutation_initial_state),
        .lCounter_state(lCounter_state),
        .rst_lCounter(rst_lCounter),
        .shift_lCounter(shift_lCounter),
        .end_permutation(end_permutation),
        .state(permutation_state)
    );


    logic rst_squezzing;
    logic rst_permutation_from_squezzing;
    logic [b-1:0] permutation_initial_state_from_squezzing;
    logic end_squeezing;

    squeezing_phase #(.N(N),.r(r),.b(b)) squeezing_phase_impl(
        .clk(clk),
        .rst(rst_squezzing),
        .end_permutation(end_permutation),
        .permutation_state(permutation_state),
        .rst_permutation(rst_permutation_from_squezzing),
        .permutation_initial_state(permutation_initial_state_from_squezzing),
        .end_squeezing(end_squeezing),
        .result(digest)
    );

    logic rst_permutation_from_absorb;
    logic [b-1:0] permutation_initial_state_from_absorb;

    logic begin_squeezing;

    assign rst_permutation = begin_squeezing == 0 ? rst_permutation_from_absorb : rst_permutation_from_squezzing ;

    assign permutation_initial_state = begin_squeezing == 0 ? permutation_initial_state_from_absorb : permutation_initial_state_from_squezzing;

    logic last_block;
    logic [r-1:0] last_padded_data;
    assign last_padded_data = 1<<(r-1);

    logic [b-1:0] state;

    logic [3:0] current_state;
    logic [3:0] next_state;
    localparam IDLE = 0;
    localparam PERMUTATION = 1;
    localparam WAIT_PERMUTATION = 2;
    localparam WAIT_FOR_DATA = 3;
    localparam SQUEZZING_PHASE = 4;
    localparam END_STATE = 5;
    localparam WAIT_REG = 6;
    

    logic [b-1:0] standart_initial_state_from_absorb;
    assign standart_initial_state_from_absorb = r==8 ? data_input ^ state : {data_input[7:0],data_input[15:8]} ^ state;

    logic [b-1:0] last_initial_state_from_absorb;
    assign last_initial_state_from_absorb = r==8 ? last_padded_data ^ state : {last_padded_data[7:0],last_padded_data[15:8]} ^ state;

    assign permutation_initial_state_from_absorb =  last_block == 0 ? standart_initial_state_from_absorb : last_initial_state_from_absorb;
    



    always_comb begin
        next_state = current_state;

        busy = 1'b1;
        rst_permutation_from_absorb = 1'b1;
        rst_squezzing = 1'b1;
        end_hash = 1'b0;


        case(current_state)
            IDLE: begin
                busy = 1'b0;
                rst_permutation_from_absorb = 1'b1;
                if(data_ready == 1'b1) begin
                    next_state = PERMUTATION;
                end
            end
            PERMUTATION: begin
                rst_permutation_from_absorb = 1;
                next_state = WAIT_PERMUTATION;
            end
            WAIT_PERMUTATION:begin
                rst_permutation_from_absorb = 0;
                if(end_permutation == 1'b1) begin
                    next_state = WAIT_FOR_DATA;
                end
            end
            WAIT_FOR_DATA: begin
                busy = 1'b0;
                rst_permutation_from_absorb = 0;
                if(last_block == 1'b1) begin
                    next_state = WAIT_REG;
                end
                else if(data_ready == 1'b1 || start_hash) begin
                    next_state = PERMUTATION;
                end
                
            end
            
            SQUEZZING_PHASE: begin
                rst_squezzing = 1'b0;
                if(end_squeezing) begin
                    next_state= END_STATE;
                end
            end
            END_STATE: begin
                rst_squezzing = 1'b0;
                busy = 1'b0;
                end_hash = 1'b1;
            end
            WAIT_REG : begin
                rst_permutation_from_absorb = 0;
                next_state = SQUEZZING_PHASE;
            end
            default:;
        endcase
    end

    always_ff @(posedge clk) begin
        case(current_state)
            IDLE: begin
                state <= 0;
                last_block <= 1'b0;
                begin_squeezing <= 0;
            end
            PERMUTATION: begin
              
            end
            WAIT_PERMUTATION: begin
                if(end_permutation == 1'b1) begin
                    state <= permutation_state;
                end
            end
            WAIT_FOR_DATA: begin
                if(last_block == 1'b1) begin
                    begin_squeezing <= 1'b1;
                end
                if(start_hash == 1'b1) begin
                    last_block <= 1'b1;
                end
            end
            
            SQUEZZING_PHASE: begin

            end
            END_STATE: begin

            end

            default:;
        endcase
    end

    always_ff @(posedge clk) begin
        if(rst == 1) begin
            current_state <= IDLE;
        end
        else begin
            current_state <= next_state;
        end
    end

endmodule: spongent_iter




module squeezing_phase #(
    parameter N = 88,
    parameter b = 88,
    parameter r = 8
)
(
    input clk,
    input rst,
    input end_permutation,
    input [b-1:0] permutation_state,
    output logic rst_permutation,
    output [b-1:0] permutation_initial_state,
    output end_squeezing,
    output logic [N-1:0] result
);


    logic [$clog2(N/r):0] counter_o;
    logic counter_up;

    counter #(.DATA_WIDTH($clog2(N/r)+1)) counter_impl(
        .clk(clk),
        .rst(rst),
        .up(counter_up),
        .down(1'b0),
        .din({$clog2(N/r)+1{1'b0}}),
        .dout(counter_o)
    );

    assign end_squeezing = counter_o >= N/r -1  ? 1 : 0;

    logic [b-1:0] state;
    assign permutation_initial_state = state;

    logic [r-1:0] result_chunk;
    assign result_chunk = r==8 ? permutation_state[r-1:0] : {permutation_state[7:0],permutation_state[15:8]};

    typedef enum logic [1:0] {IDLE,PERMUTATION,RST_PERMUTATION,END} state_t;
    state_t current_state, next_state;

    always_comb begin
        next_state = current_state;
        rst_permutation = 1;
        counter_up = 0;
        case(current_state)
            IDLE : begin
                rst_permutation = 0;
                next_state = RST_PERMUTATION;
            end
            RST_PERMUTATION : begin
                next_state = PERMUTATION;
                
                if(end_squeezing == 1) begin
                    next_state = END;
                end
            end
            PERMUTATION : begin
                rst_permutation = 0;
                if(end_permutation == 1) begin
                    next_state = RST_PERMUTATION;
                    counter_up = 1;
                end
            end
            END : begin
                
            end
            default:;
        endcase
    end

    always_ff @(posedge clk) begin

        case(current_state)
            IDLE : begin
                result <= result_chunk;
                state <= permutation_state;
            end
            RST_PERMUTATION : begin
                
            end
            PERMUTATION : begin
                if(end_permutation == 1) begin
                    state <= permutation_state;
                    result <= (result << r) | result_chunk;
                end
            end
            END : begin
                
            end
            default:;
        endcase
    end

    always_ff @(posedge clk) begin
        if(rst == 1) begin
            current_state <= IDLE;
        end
        else begin
            current_state <= next_state;
        end
    end


endmodule : squeezing_phase






module permutation #(
    parameter DATA_WIDTH = 88,
    parameter R = 45
)
(
    input clk,
    input rst,
    input [DATA_WIDTH-1:0] initial_state,
    input [$clog2(R)-1:0] lCounter_state,
    output rst_lCounter,
    output shift_lCounter,
    output end_permutation,
    output [DATA_WIDTH-1:0] state
);

    logic [DATA_WIDTH-1:0] state_reg;
   

    logic [$clog2(R)-1:0] counter_o;

    counter #(.DATA_WIDTH($clog2(R))) counter_impl(
        .clk(clk),
        .rst(rst),
        .up(~end_permutation),
        .down(1'b0),
        .din({$clog2(R){1'b0}}),
        .dout(counter_o)
    );

    assign rst_lCounter = rst;
    assign end_permutation = counter_o == R ? 1 : 0 ;
    assign shift_lCounter = ~end_permutation;
    logic [$clog2(R)-1:0] reverse_lCounter;

    genvar i;

    generate
        for (i = 0;i<$clog2(R) ;i=i+1 ) begin
            assign reverse_lCounter[i] = lCounter_state[$clog2(R)-1-i];
        end
    endgenerate

    



    always_ff @(posedge clk) begin
        if(rst == 1) begin
            state_reg <= initial_state;
        end
        else if(end_permutation == 0 && counter_o == 0) begin
            state_reg <= state_reg ^ lCounter_state ^ (reverse_lCounter << (DATA_WIDTH - $clog2(R)));
        end
        else if(end_permutation == 0) begin
            state_reg <= state ^ lCounter_state ^ (reverse_lCounter << (DATA_WIDTH-$clog2(R)));
        end
    end

    logic [DATA_WIDTH-1:0] state_S_box;
    
    generate 
        for (i = 0;i<(DATA_WIDTH>>2);i=i+1) begin
            S_box s_box_i(
                .din(state_reg[(i<<2)+3:i<<2]),
                .dout(state_S_box[(i<<2)+3:i<<2])
            );
        end
    endgenerate

    pLayer #(.DATA_WIDTH(DATA_WIDTH)) pLayer_impl(
        .din(state_S_box),
        .dout(state)
    );


endmodule : permutation

module S_box(
    input [3:0] din,
    output logic [3:0] dout
);

    always_comb begin
        case(din)
            0: dout = 4'hE;
            1: dout = 4'hD;
            2: dout = 4'hB;
            3: dout = 4'h0;
            4: dout = 4'h2;
            5: dout = 4'h1;
            6: dout = 4'h4;
            7: dout = 4'hF;
            8: dout = 4'h7;
            9: dout = 4'hA;
            10: dout = 4'h8;
            11: dout = 4'h5;
            12: dout = 4'h9;
            13: dout = 4'hC;
            14: dout = 4'h3;
            15: dout = 4'h6;
            default:  dout = 4'hE;
        endcase
    end


endmodule: S_box


module pLayer #(
    parameter DATA_WIDTH = 88
)
(
    input [DATA_WIDTH-1:0] din,
    output [DATA_WIDTH-1:0] dout
);

    genvar i;
    generate
        for (i = 0;i<DATA_WIDTH-1 ;i=i+1 ) begin
            assign dout[(i * DATA_WIDTH>>2) % (DATA_WIDTH-1)] = din[i];
        end
    endgenerate

    assign dout[DATA_WIDTH-1] = din[DATA_WIDTH-1];



endmodule : pLayer