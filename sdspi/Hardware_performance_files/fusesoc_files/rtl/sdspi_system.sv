/**
 * @Author: German Cano Quiveu <germancq>
 * @Date:   2019-03-06T17:31:00+01:00
 * @Email:  germancq@dte.us.es
 * @Filename: sdspi_system.v
 * @Last modified by:   germancq
 * @Last modified time: 2019-03-08T15:27:09+01:00
 */
module sdspi_system(
  input clk,
  input rst,

  input start,
  output logic finish,
  output logic err,


  input [31:0] n_blocks,
  input cmd18,
  input [4:0] sclk_speed,
  output busy,

  output sclk,
  output cs,
  output mosi,
  input miso

  );

  logic spi_rst;
  logic spi_busy;
  logic spi_r_byte;
  logic spi_r_multi_block;
  logic spi_r_block;
  logic spi_err;
  logic [31:0] spi_block_addr;

  assign busy = spi_busy;

  sdspihost sdspi_inst(
    .clk(clk),
    .reset(spi_rst),
    .busy(spi_busy),
    .err(spi_err),

    .r_block(spi_r_block),
    .r_multi_block(spi_r_multi_block),
    .r_byte(spi_r_byte),
    .w_block(0),
    .w_byte(0),
    .block_addr(spi_block_addr),
    .data_out(),
    .data_in(8'h00),


    //SPI interface
    .miso(miso),
    .mosi(mosi),
    .sclk(sclk),
    .ss(cs),
    ////
    .sclk_speed(sclk_speed),

    .debug()
  );

  /**
    1 - Rst sdspi y esperar a IDLE
    2 - r_block con start_addr + counter_addr_o
    3 -
      a)leer hasta n_block*512 sii cmd18 = 1
      b)leer 512 bytes sii cmd18 = 0
    4 -
      a)finalizar sii cmd18 = 1
      b)finalizar si counter_addr_o == n_blocks
          b.1)up_addr = 1 e ir paso 2
  **/


logic [31:0] counter_addr_o;
logic counter_addr_rst;
logic counter_addr_up;
assign spi_block_addr = counter_addr_o;
counter #(.DATA_WIDTH(32)) counter_addr(
  .clk(clk),
  .rst(counter_addr_rst),
  .up(counter_addr_up),
  .down(1'b0),
  .din(32'h0),
  .dout(counter_addr_o)
  );


logic counter_bytes_up;
logic [31:0] counter_bytes_o;
logic counter_bytes_rst;
counter #(.DATA_WIDTH(32)) counter_bytes(
   .clk(clk),
   .rst(counter_bytes_rst),
   .up(counter_bytes_up),
   .down(1'b0),
   .din(32'h0),
   .dout(counter_bytes_o)
);

logic [3:0] current_state;
logic [3:0] next_state;

localparam IDLE = 4'h0;
localparam WAIT_RST_SPI = 4'h1;
localparam WAIT_FOR_SDSPI = 4'h2;
localparam SEL_SD_BLOCK = 4'h3;
localparam WAIT_BLOCK = 4'h4;
localparam READ_DATA = 4'h5;
localparam READ_BYTE = 4'h6;
localparam WAIT_BYTE = 4'h7;
localparam CHANGE_BLOCK = 4'h8;
localparam END_FSM = 4'h9;
localparam ERROR = 4'hA;


always_comb begin

  next_state = current_state;

  finish = 1'b0;

  //spi
  spi_rst = 1'b0;
  spi_r_block = 1'b0;
  spi_r_multi_block = 1'b0;
  spi_r_byte = 1'b0;

  counter_addr_rst = 1'b0;
  counter_addr_up = 1'b0;

  counter_bytes_up = 1'b0;
  counter_bytes_rst = 1'b0;

  err = 1'b0;

  case(current_state)
    IDLE:
      begin
        spi_rst = 1'b1;
        counter_addr_rst = 1'b1;
        if(start == 1)
          next_state = WAIT_RST_SPI;
      end
    WAIT_RST_SPI:
      begin
        if(spi_busy == 1'b1)
          next_state = WAIT_FOR_SDSPI;
      end
    WAIT_FOR_SDSPI:
      begin
        if(spi_busy == 1'b0)
          next_state = SEL_SD_BLOCK;
      end
    SEL_SD_BLOCK:
      begin
        counter_bytes_rst = 1'b1;

        spi_r_block = ~cmd18;
        spi_r_multi_block = cmd18;
        if(spi_busy == 1'b1)
            next_state = WAIT_BLOCK;
      end
    WAIT_BLOCK:
      begin
        spi_r_block = ~cmd18;
        spi_r_multi_block = cmd18;
        if(spi_busy == 1'b0)
            next_state = READ_DATA;
      end
    READ_DATA:
      begin
        spi_r_block = ~cmd18;
        spi_r_multi_block = cmd18;

        next_state = READ_BYTE;

        if(cmd18)
          begin
            if(counter_bytes_o == (n_blocks<<9))
              next_state = END_FSM;
          end
        else
          begin
            if(counter_bytes_o == 32'h200)
            begin
              if(counter_addr_o == n_blocks)
                next_state = END_FSM;
              else
                next_state = CHANGE_BLOCK;
            end
          end
      end
    READ_BYTE:
      begin

        spi_r_block = ~cmd18;
        spi_r_multi_block = cmd18;
        spi_r_byte = 1;

        if(spi_busy == 1)
        begin
            next_state = WAIT_BYTE;
            counter_bytes_up = 1;
        end

      end
    WAIT_BYTE:
      begin
        spi_r_block = ~cmd18;
        spi_r_multi_block = cmd18;
        
        if(spi_busy == 1'b0)
        begin
            next_state = READ_DATA;
        end
      end
    CHANGE_BLOCK:
      begin
        counter_addr_up = 1'b1;
        next_state = SEL_SD_BLOCK;
      end
    END_FSM:
      begin
        if(spi_busy == 1'b0)
          finish = 1'b1;
      end
    ERROR:
      begin
          err = 1'b1;
      end  
  endcase

end

always_ff @ (posedge clk)
begin
  if(rst)
    current_state <= IDLE;
  else if(spi_err)
    current_state <= ERROR;  
  else
    current_state <= next_state;
end

endmodule
