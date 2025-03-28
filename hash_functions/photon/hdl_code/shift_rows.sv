/**
 * File              : shift_rows.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 28.03.2025
 * Last Modified Date: 28.03.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */
module shift_rows #(
    parameter BIT_CELL = 4,
    parameter DIM = 5
) (
    input  [BIT_CELL-1:0] in_state [(DIM*DIM)-1:0],
    output [BIT_CELL-1:0] out_state[(DIM*DIM)-1:0]
);

  genvar i;
  genvar j;

  generate
    for (i = 0; i < DIM; i++) begin
      for (j = 0; j < DIM; j++) begin
        assign out_state[(DIM*i)+j] = in_state[(DIM*i)+((i+j)%DIM)];

      end
    end
  endgenerate
endmodule
