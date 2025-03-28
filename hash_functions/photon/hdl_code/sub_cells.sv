/**
 * File              : sub_cells.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 28.03.2025
 * Last Modified Date: 28.03.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */
module sub_cells #(
    parameter BIT_CELL = 4,
    parameter DIM = 5
) (
    input  [BIT_CELL-1:0] in_state [(DIM*DIM)-1:0],
    output [BIT_CELL-1:0] out_state[(DIM*DIM)-1:0]
);

  logic [3:0] sbox_present[15:0];
  logic [7:0] sbox_aes[255:0];
  SBOX sbox_inst (
      .sbox_present(sbox_present),
      .sbox_aes(sbox_aes)
  );

  genvar i;
  generate
    for (i = 0; i < (DIM * DIM); i++) begin
      assign out_state[i] = BIT_CELL == 4 ? sbox_present[in_state[i]] : sbox_aes[in_state[i]];
    end
  endgenerate

endmodule
