/**
 * File              : clefia.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 20.02.2025
 * Last Modified Date: 20.02.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */


module clefia #(
    parameter KEY_LEN = 128
) (
    input clk,
    input rst,
    input [KEY_LEN-1:0] key,
    input [127:0] block_i,
    output [127:0] block_o,
    input rq_data,
    output end_key_generation,
    output end_signal

);


endmodule : clefia


