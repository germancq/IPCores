/**
 * File              : add_constant.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 27.03.2025
 * Last Modified Date: 27.03.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */
module add_constant #(
    parameter DIM = 5,
    parameter T_SIZE = 100,
    parameter BIT_CELL = 4
) (
    input [BIT_CELL-1:0] in_state[(DIM*DIM)-1:0],
    input [3:0] round_value,
    output [BIT_CELL-1:0] out_state[(DIM*DIM)-1:0]
);


  logic [BIT_CELL-1:0] ic[DIM-1:0];
  IC #(
      .DIM(DIM),
      .T_SIZE(T_SIZE)
  ) ic_inst (
      .ic(ic)
  );

  logic [3:0] rc[11:0];
  RC rc_inst (.rc(rc));

  genvar i;
  genvar j;
  generate

    for (i = 0; i < (DIM * DIM); i++) begin
      if (i % DIM == 0) begin
        assign out_state[i] = in_state[i] ^ rc[round_value] ^ ic[i/DIM];

      end else begin
        assign out_state[i] = in_state[i];
      end

    end
  endgenerate

endmodule
