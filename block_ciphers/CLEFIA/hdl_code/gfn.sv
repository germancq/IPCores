/**
 * File              : gfn.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 20.02.2025
 * Last Modified Date: 20.02.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module gfn #(
    parameter d = 4,
    parameter r = 12
) (
    input clk,
    input rst,
    input [31:0] round_keys[((d>>1)*r)-1:0],
    input [31:0] block_i[d-1:0],
    output [31:0] block_o[d-1:0],
    output logic end_signal
);

endmodule : gfn


