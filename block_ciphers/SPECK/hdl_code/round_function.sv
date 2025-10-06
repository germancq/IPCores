/**
 * File              : round_function.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 06.10.2025
 * Last Modified Date: 06.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module round_function #(
    parameter N = 16
) (
    input  [N-1:0] x,
    input  [N-1:0] y,
    input  [N-1:0] rk,
    output [N-1:0] x_new,
    output [N-1:0] y_new
);

  logic [3:0] alfa, beta;
  assign alfa = N == 16 ? 7 : 8;
  assign beta = N == 16 ? 2 : 3;

  logic [N-1:0] x1, y1;
  assign x1 = y;
  assign y1 = rk ^ (y + {x[alfa-1:0], x[N-1:alfa]});

  assign x_new = x1;
  assign y_new = x1 ^ {y1[N-beta-1:0], y1[N-1:N-beta]};

endmodule
