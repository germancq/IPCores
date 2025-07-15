/**
 * File              : tea.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 14.07.2025
 * Last Modified Date: 14.07.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module TEA (
    input clk,
    input rst,
    output end_key_generation,
    input [127:0] key,
    input [31:0] block_i,
    output [31:0] block_o,
    input enc_dec,
    input rq_data,
    output end_signal
);

  assign end_key_generation = 1;

endmodule
