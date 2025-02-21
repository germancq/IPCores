/**
 * File              : extended_euclidean.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 21.02.2025
 * Last Modified Date: 21.02.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */


module extended_euclidean_algorithm ();

endmodule : extended_euclidean_algorithm


module longdivision #(
    parameter N = 8
) (
    input [(N*2)-2:0] a,
    input [(N*2)-2:0] b,
    output [N-1:0] q
);


  function integer getDegree(input logic [(N*2)-2:0] p);
    begin
      for (integer i = (N * 2) - 2; i > 0; i--) begin
        if (p[i] == 1) begin
          return i;
        end
      end
    end
  endfunction

  integer degree_a;
  logic [(2*N)-2:0] m_out[N-1:0];
  logic [(2*N)-2:0] polinomials[N-1:0];
  assign polinomials[N-1] = a;
  genvar i;
  generate
    for (i = ; i >= 0; i = i - 1) begin
      mux2 #(
          .N(degree_a))
      ) m_i (
          .a  (0),
          .b  (p << (i)),
          .sel(polinomials[i+1][N+i]),
          .c  (m_out[i])
      );

      galois_adder #(
          .N((2 * N) - 1)
      ) g_i (
          .a(polinomials[i+1]),
          .b(m_out[i]),
          .s(polinomials[i])
      );
    end
  endgenerate

  assign s = polinomials[0];
endmodule : longdivision




































