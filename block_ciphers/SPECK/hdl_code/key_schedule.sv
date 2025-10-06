/**
 * File              : key_schedule.sv
 * Author            : German C.Quiveu <germancq@dte.us.es>
 * Date              : 06.10.2025
 * Last Modified Date: 06.10.2025
 * Last Modified By  : German C.Quiveu <germancq@dte.us.es>
 */

module key_schedule #(
    parameter N = 16,
    parameter M = 4,
    parameter T = 22
) (
    input clk,
    input rst,
    input start,
    input [(M*N)-1:0] key,
    output [N-1:0] round_keys[T-1:0],
    output logic end_signal
);

  localparam alfa = N == 16 ? 7 : 8;
  localparam beta = N == 16 ? 2 : 3;

  genvar i;

  logic [  0:0] rk_cl [T-1:0];
  logic [  0:0] rk_w  [T-1:0];
  logic [N-1:0] rk_din[T-1:0];
  generate
    for (i = 0; i < T; i++) begin
      register #(
          .DATA_WIDTH(N)
      ) reg_rk_i (
          .clk(clk),
          .cl(rk_cl[i]),
          .w(rk_w[i]),
          .din(rk_din[i]),
          .dout(round_keys[i])
      );
    end
  endgenerate

  assign rk_din[0] = key[N-1:0];


  logic [0:0] l_keys_cl[(T+M)-1:0];
  logic [0:0] l_keys_w[(T+M)-1:0];
  logic [N-1:0] l_keys_din[(T+M)-1:0];
  logic [N-1:0] l_keys_dout[(T+M)-1:0];
  generate
    for (i = 0; i < (T + M); i++) begin
      register #(
          .DATA_WIDTH(N)
      ) reg_l_keys_i (
          .clk(clk),
          .cl(l_keys_cl[i]),
          .w(l_keys_w[i]),
          .din(l_keys_din[i]),
          .dout(l_keys_dout[i])
      );
    end

    for (i = 0; i < (M - 1); i++) begin
      assign l_keys_din[i] = key[((N)*(i+2))-1:(N)*(i+1)];
    end
  endgenerate

  logic rk_counter_rst;
  logic rk_counter_up;
  logic [7:0] rk_counter_dout;

  counter #(
      .DATA_WIDTH(8)
  ) counter_rk (
      .clk (clk),
      .rst (rk_counter_rst),
      .up  (rk_counter_up),
      .down(0),
      .din (0),
      .dout(rk_counter_dout)
  );

  logic [2:0] current_state, next_state;
  localparam IDLE = 0;
  localparam CALC_AUX = 1;
  localparam CALC_RK = 2;
  localparam UPDATE_COUNTER = 3;
  localparam END_STATE = 4;

  logic [31:0] j;

  always_comb begin
    next_state = current_state;

    end_signal = 0;

    rk_counter_rst = 0;
    rk_counter_up = 0;

    for (j = 0; j < T; j++) begin
      rk_cl[j] = 0;
      rk_w[j]  = 0;
    end

    for (j = 1; j < T; j++) begin
      rk_din[j] = 0;
    end

    for (j = 0; j < (T + M); j++) begin
      l_keys_w[j]  = 0;
      l_keys_cl[j] = 0;
    end

    for (j = (M - 1); j < (T + M); j++) begin
      l_keys_din[j] = 0;
    end

    case (current_state)
      IDLE: begin

        for (j = 0; j < T; j++) begin
          rk_cl[j] = 1;
        end

        for (j = 0; j < (T + M); j++) begin
          l_keys_cl[j] = 1;
        end

        rk_counter_rst = 1;

        if (start) begin
          next_state = CALC_AUX;

          rk_w[0] = 1;

          for (j = 0; j < (M - 1); j++) begin
            l_keys_w[j] = 1;
          end

        end
      end

      CALC_AUX: begin
        l_keys_din[rk_counter_dout+M-1] = (round_keys[rk_counter_dout] + {l_keys_dout[rk_counter_dout][alfa-1:0],l_keys_dout[rk_counter_dout][N-1:alfa]});
        l_keys_w[rk_counter_dout+M-1] = 1;

        next_state = CALC_RK;

      end

      CALC_RK: begin
        rk_w[rk_counter_dout+1] = 1;
        rk_din[rk_counter_dout+1] = l_keys_dout[rk_counter_dout+M-1] ^ {round_keys[rk_counter_dout][N-beta-1:0],round_keys[rk_counter_dout][N-1:N-beta]};

        next_state = UPDATE_COUNTER;

      end

      UPDATE_COUNTER: begin
        rk_counter_up = 1;
        next_state = CALC_AUX;
        if (rk_counter_dout == T - 2) begin
          next_state = END_STATE;
        end

      end

      END_STATE: begin
        end_signal = 1;
      end

    endcase

  end

  always_ff @(posedge clk) begin
    if (rst) begin
      current_state <= IDLE;
    end else begin
      current_state <= next_state;
    end
  end

endmodule
