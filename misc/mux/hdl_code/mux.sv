module mux 
    #(parameter DATA_WIDTH = 8)
    (
        input [DATA_WIDTH-1:0] a,
        input [DATA_WIDTH-1:0] b,
        input sel,
        output [DATA_WIDTH-1:0] c
    );
    
    assign c = sel ? b : a ;

endmodule : mux


 module mux_4 
    #(parameter DATA_WIDTH = 8)
    (
        input [DATA_WIDTH-1:0] a,
        input [DATA_WIDTH-1:0] b,
        input [DATA_WIDTH-1:0] c,
        input [DATA_WIDTH-1:0] d,
        output [DATA_WIDTH-1:0] e,
        input [1:0] sel
    );

    logic [DATA_WIDTH-1:0] m00_o;
    logic [DATA_WIDTH-1:0] m01_o;

    mux #(.DATA_WIDTH(DATA_WIDTH)) m00(
        .a(a),
        .b(b),
        .c(m00_o),
        .sel(sel[0])
    );

    mux #(.DATA_WIDTH(DATA_WIDTH)) m01(
        .a(c),
        .b(d),
        .c(m01_o),
        .sel(sel[0])
    );

    mux #(.DATA_WIDTH(DATA_WIDTH)) m10(
        .a(m00_o),
        .b(m01_o),
        .c(e),
        .sel(sel[1])
    );

    

 endmodule : mux_4


module  mux8 
#(parameter DATA_WIDTH = 8)
(
    input [DATA_WIDTH-1:0] i0,
    input [DATA_WIDTH-1:0] i1,
    input [DATA_WIDTH-1:0] i2,
    input [DATA_WIDTH-1:0] i3,
    input [DATA_WIDTH-1:0] i4,
    input [DATA_WIDTH-1:0] i5,
    input [DATA_WIDTH-1:0] i6,
    input [DATA_WIDTH-1:0] i7,
    output [DATA_WIDTH-1:0] o,
    input [2:0] sel
);

    logic o_00;
    logic o_01;

    mux_4 #(.DATA_WIDTH(DATA_WIDTH)) m00(
        .a(i0),
        .b(i1),
        .c(i2),
        .d(i3),
        .e(o_00),
        .sel(sel[1:0])
    );

    mux_4 #(.DATA_WIDTH(DATA_WIDTH)) m01(
        .a(i4),
        .b(i5),
        .c(i6),
        .d(i7),
        .e(o_01),
        .sel(sel[1:0])
    );

    mux #(.DATA_WIDTH(DATA_WIDTH)) m10(
        .a(o_00),
        .b(o_01),
        .c(o),
        .sel(sel[2])
    );
    
endmodule : mux8