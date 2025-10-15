/**
 * File              : ascon_utils.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 14.10.2025
 * Last Modified Date: 14.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

virtual class ascon_utils #(
    parameter LEN = 64
);

  static function logic [LEN-1:0] order(input logic [LEN-1:0] i_data);
    logic [LEN-1:0] result;

    for (int i = 0; i < (LEN >> 3); i++) begin
      result[7+(i*8):(i*8)] = i_data[(LEN-1)-(i*8):(LEN)-((i+1)*8)];
    end
    return result;

  endfunction

endclass
