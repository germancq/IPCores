/**
 * File              : IC.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 27.03.2025
 * Last Modified Date: 27.03.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */
module IC #(
    parameter DIM = 5,
    parameter T_SIZE = 100
) (
    output [3:0] ic[DIM-1:0]
);

  logic [3:0] ic_100[4:0];
  logic [3:0] ic_144[5:0];
  logic [3:0] ic_196[6:0];
  logic [3:0] ic_256[7:0];
  logic [3:0] ic_288[5:0];

  generate
    case (T_SIZE)
      100: begin
        assign ic = ic_100;
      end
      144: begin
        assign ic = ic_144;
      end
      196: begin
        assign ic = ic_196;
      end
      256: begin
        assign ic = ic_256;
      end
      288: begin
        assign ic = ic_288;
      end

      default:
      begin
        assign ic = ic_100;
      end
    endcase
  endgenerate

  assign ic_100[0] = 4'h0;
  assign ic_100[1] = 4'h1;
  assign ic_100[2] = 4'h3;
  assign ic_100[3] = 4'h6;
  assign ic_100[4] = 4'h4;

  assign ic_144[0] = 4'h0;
  assign ic_144[1] = 4'h1;
  assign ic_144[2] = 4'h3;
  assign ic_144[3] = 4'h7;
  assign ic_144[4] = 4'h6;
  assign ic_144[5] = 4'h4;

  assign ic_196[0] = 4'h0;
  assign ic_196[1] = 4'h1;
  assign ic_196[2] = 4'h2;
  assign ic_196[3] = 4'h5;
  assign ic_196[4] = 4'h3;
  assign ic_196[5] = 4'h6;
  assign ic_196[6] = 4'h4;

  assign ic_256[0] = 4'h0;
  assign ic_256[1] = 4'h1;
  assign ic_256[2] = 4'h3;
  assign ic_256[3] = 4'h7;
  assign ic_256[4] = 4'hf;
  assign ic_256[5] = 4'he;
  assign ic_256[6] = 4'hc;
  assign ic_256[7] = 4'h8;

  assign ic_288[0] = 4'h0;
  assign ic_288[1] = 4'h1;
  assign ic_288[2] = 4'h3;
  assign ic_288[3] = 4'h7;
  assign ic_288[4] = 4'h6;
  assign ic_288[5] = 4'h4;

endmodule
