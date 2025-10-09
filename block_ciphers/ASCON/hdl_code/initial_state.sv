/**
 * File              : initial_state.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 09.10.2025
 * Last Modified Date: 09.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module initial_state (
    input  [127:0] key,
    input  [127:0] nonce,
    output [ 63:0] state_ascon_din[4:0]
);

  assign state_ascon_din[0] = 64'h00001000808C0001;
  assign state_ascon_din[1] = {
    key[71:64],
    key[79:72],
    key[87:80],
    key[95:88],
    key[103:96],
    key[111:104],
    key[119:112],
    key[127:120]
  };
  assign state_ascon_din[2] = {
    key[7:0], key[15:8], key[23:16], key[31:24], key[39:32], key[47:40], key[55:48], key[63:56]
  };

  assign state_ascon_din[3] = {
    nonce[71:64],
    nonce[79:72],
    nonce[87:80],
    nonce[95:88],
    nonce[103:96],
    nonce[111:104],
    nonce[119:112],
    nonce[127:120]
  };
  assign state_ascon_din[4] = {
    nonce[7:0],
    nonce[15:8],
    nonce[23:16],
    nonce[31:24],
    nonce[39:32],
    nonce[47:40],
    nonce[55:48],
    nonce[63:56]
  };



endmodule





























