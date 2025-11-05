/**
 * File              : ascon_modules_utils.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 22.10.2025
 * Last Modified Date: 22.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */


module reorder #(
    parameter LEN = 64,
    parameter BYTE_LEN = 64
) (
    input  [LEN-1:0] i_data,
    output [LEN-1:0] o_data
);

  logic [LEN-1:0] aux;
  genvar i;
  generate
    for (i = 0; i < (LEN >> 3); i++) begin
      assign aux[(i*8)+:8] = i_data[(LEN-1)-(i*8)-:8];
    end
  endgenerate

  assign o_data = aux >> (LEN - BYTE_LEN);


endmodule : reorder

module pad #(
    parameter LEN = 64
) (
    input  [LEN-1:0] i_data,
    output [LEN-1:0] o_data
);
  assign o_data = i_data ^ (1 << ($clog2(i_data) + 1));

endmodule : pad

module order_and_pad #(
    parameter LEN = 64,
    parameter BYTE_LEN = 64
) (
    input  [LEN-1:0] i_data,
    output [LEN-1:0] o_data
);

  logic [LEN-1:0] aux;

  reorder #(
      .LEN(LEN),
      .BYTE_LEN(LEN)
  ) reorder_impl (
      .i_data(i_data),
      .o_data(aux)
  );

  pad #(
      .LEN(LEN)
  ) pad_impl (
      .i_data(aux),
      .o_data(o_data)
  );

endmodule : order_and_pad
