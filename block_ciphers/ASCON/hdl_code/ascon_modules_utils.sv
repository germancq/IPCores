/**
 * File              : ascon_modules_utils.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 22.10.2025
 * Last Modified Date: 22.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */


//change endianness be to le and viceversa
module reorder #(
    parameter LEN = 64
) (
    input  [LEN-1:0] i_data,
    output [LEN-1:0] o_data
);

  genvar i;
  generate
    for (i = 0; i < (LEN >> 3); i++) begin
      assign o_data[(i*8)+:8] = i_data[(LEN-1)-(i*8)-:8];
    end
  endgenerate



endmodule : reorder

module pad #(
    parameter LEN = 64
) (
    input  [LEN-1:0] i_data,
    output [  LEN:0] o_data
);
  //assign o_data = i_data ^ (1 << ($clog2(i_data) + 1));
  assign o_data = {1'b1, i_data};

endmodule : pad

module order_and_pad #(
    parameter LEN = 64
) (
    input  [LEN-1:0] i_data,
    output [  LEN:0] o_data
);

  logic [LEN-1:0] aux;

  reorder #(
      .LEN(LEN)
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

