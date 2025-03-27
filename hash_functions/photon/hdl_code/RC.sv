/**
 * File              : RC.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 27.03.2025
 * Last Modified Date: 27.03.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */
module RC (
    output [3:0] rc[11:0]
);

  assign rc[0]  = 4'h1;
  assign rc[1]  = 4'h3;
  assign rc[2]  = 4'h7;
  assign rc[3]  = 4'he;
  assign rc[4]  = 4'hd;
  assign rc[5]  = 4'hb;
  assign rc[6]  = 4'h6;
  assign rc[7]  = 4'hc;
  assign rc[8]  = 4'h9;
  assign rc[9]  = 4'h2;
  assign rc[10] = 4'h5;
  assign rc[11] = 4'ha;
endmodule
