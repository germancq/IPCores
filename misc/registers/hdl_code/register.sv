/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2019-09-30 15:29:16
 * @ Modified by: Your name
 * @ Modified time: 2020-03-07 17:38:50
 * @ Description:
 */



module register
    #(parameter DATA_WIDTH = 8)
    (
        input clk,
        input cl,
        input w,
        input [DATA_WIDTH-1:0] din,
        output logic [DATA_WIDTH-1:0] dout
    );



always_ff @(posedge clk) begin
    if (cl) begin
        dout <= { DATA_WIDTH {1'b0} };
    end
    else if (w) begin
        dout <= din;
    end
end

endmodule : register


module shift_register
    #(parameter DATA_WIDTH = 8)
    (
        input clk,
        input cl,
        input shift_right,
        input shift_left,
        input load,
        input input_bit,
        input [DATA_WIDTH-1 : 0] din,
        output logic output_bit,
        output logic [DATA_WIDTH-1 : 0] dout
    );

always_ff @(posedge clk) begin

    if (cl == 1)
        begin
            dout <= {DATA_WIDTH{1'b0}};
        end
    else if(load == 1)
        begin
            dout <= din;
        end
    else if (shift_right == 1) 
        begin
            output_bit <= dout[0];
            
            dout[DATA_WIDTH-1:0] <= {input_bit,dout[DATA_WIDTH-1:1]};
        end        
    else if (shift_left == 1)  
        begin
            output_bit <= dout[DATA_WIDTH - 1];
            dout[DATA_WIDTH-1:0] <= {dout[DATA_WIDTH-2:0],input_bit};
        end 
end

endmodule : shift_register 

module LFSR #(
    parameter DATA_WIDTH = 6
)
(
    input clk,
    input rst,
    input shift,
    input [DATA_WIDTH:0] feedback_coeff,
    input [DATA_WIDTH-1:0] initial_state,
    output [DATA_WIDTH-1:0] state
);

    logic [DATA_WIDTH-1:0] state_reg;
    logic bit_xored;
    assign state = state_reg;

    assign bit_xored = ^(state_reg & feedback_coeff[DATA_WIDTH:1]);

    always_ff @(posedge clk) begin
        if(rst == 1) begin
            state_reg <= initial_state;
        end
        else if(shift == 1) begin
            state_reg <= {state_reg[DATA_WIDTH-2:0],bit_xored};
        end
    end

endmodule : LFSR