/**
 * @Author: German Cano Quiveu <germancq>
 * @Date:   2019-03-01T13:21:14+01:00
 * @Email:  germancq@dte.us.es
 * @Filename: fsm_autotest.v
 * @Last modified by:   germancq
 * @Last modified time: 2019-04-05T13:26:09+02:00
 */



 module fsm_autotest
 (
     input clk,
     input clk_counter,
     input rst,
     //sdspihost signals
     input spi_busy,
     output [31:0] spi_block_addr,
     input [7:0] spi_data_out,
     output logic spi_r_block,
     output logic spi_r_byte,
     output logic spi_r_multi_block,
     output logic spi_rst,
     input spi_err,
     output [7:0] spi_data_in,
     output logic spi_w_block,
     output logic spi_w_byte,
     input spi_crc_err,
     //uut ctrl signals
     output logic rst_uut,
     //uut paramters signals
     output [80-1:0] iv_uut,
     output [80-1:0] key_uut,
     //uut results signals
     input [64-1:0] block_o_uut,
     input  end_uut,
     //debug
     output [31:0] debug_signal
     );


localparam BLOCK_SIZE = 64;
localparam KEY_INPUT_SIZE = 80;
localparam IV_INPUT_SIZE = 80;
localparam BASE_OUTPUTS = 32'h5 + (IV_INPUT_SIZE>>3)+(KEY_INPUT_SIZE>>3);
localparam START_BLOCK = 32'h0x100000;


genvar i;

 /////registro SPI ///////////////////
 reg reg_spi_data_cl;
 reg reg_spi_data_w;
 reg [7:0] reg_spi_data_in;
 register #(.DATA_WIDTH(8)) reg_spi_data(
 	.clk(clk),
 	.cl(reg_spi_data_cl),
 	.w(reg_spi_data_w),
 	.din(reg_spi_data_in),
 	.dout(spi_data_in)
 );

 //////////signature registers///////////////////////
 
 logic [31:0] signature;
 logic [0:0] reg_signature_cl[3:0];
 logic [0:0] reg_signature_w[3:0];
 generate
    for (i=0;i<4;i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_signature_i(
            .clk(clk),
            .cl(reg_signature_cl[i]),
            .w(reg_signature_w[i]),
            .din(spi_data_out),
            .dout(signature[(i<<3)+7:(i<<3)])
        );
    end
 endgenerate

 //////////iteration register///////////////////////
 logic reg_iteration_cl;
 logic reg_iteration_w;
 logic [7:0] reg_iteration_o;
 register #(.DATA_WIDTH(8)) reg_iteration(
 	.clk(clk),
 	.cl(reg_iteration_cl),
 	.w(reg_iteration_w),
 	.din(spi_data_out),
 	.dout(reg_iteration_o)
 );


///////////////////////////////////////////////////////////////////

//////////uut specific registers///////////////////////
  /////////////input_to_UUT_1////////////////
 
 logic [0:0] reg_iv_i_uut_cl[(IV_INPUT_SIZE>>3)-1:0];
 logic [0:0] reg_iv_i_uut_w[(IV_INPUT_SIZE>>3)-1:0];
 generate
    for (i=0;i<(IV_INPUT_SIZE>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_input_iv_i(
            .clk(clk),
            .cl(reg_iv_i_uut_cl[i]),
            .w(reg_iv_i_uut_w[i]),
            .din(spi_data_out),
            .dout(iv_uut[(i<<3)+7:(i<<3)])
        );
    end
 endgenerate
  /////////////input_to_UUT_2////////////////
  logic [0:0] reg_key_uut_cl[(KEY_INPUT_SIZE>>3)-1:0];
  logic [0:0] reg_key_uut_w[(KEY_INPUT_SIZE>>3)-1:0];
  generate
    for (i=0;i<(KEY_INPUT_SIZE>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_input_key_i(
            .clk(clk),
            .cl(reg_key_uut_cl[i]),
            .w(reg_key_uut_w[i]),
            .din(spi_data_out),
            .dout(key_uut[(i<<3)+7:(i<<3)])
        );
    end
  endgenerate
  
 
  //////////////output_from_UUT_1////////////
  logic [BLOCK_SIZE-1:0] block_o_uut_o;
  logic reg_block_o_uut_o_cl;
  logic reg_block_o_uut_o_w;
  register #(.DATA_WIDTH(BLOCK_SIZE)) reg_output_from_UUT_1_o_0(
  	.clk(clk),
  	.cl(reg_block_o_uut_o_cl),
  	.w(reg_block_o_uut_o_w),
  	.din(block_o_uut),
  	.dout(block_o_uut_o)
  );
  
  

///////////////timer//////////////////////
 logic up_timer_counter;
 logic [63:0] counter_timer_o;
 logic rst_timer_counter;
 counter #(.DATA_WIDTH(64)) counter_timer(
    .clk(clk),
    .rst(rst_timer_counter),
    .up(up_timer_counter),
    .down(1'b0),
    .din(64'b0),
    .dout(counter_timer_o)
 );

 ///////////////block_counter////////////////
 logic up_block_counter;
 logic [31:0] counter_block_o;
 logic rst_block_counter;
 assign spi_block_addr = counter_block_o;
 counter #(.DATA_WIDTH(32)) counter_block(
    .clk(clk),
    .rst(rst_block_counter),
    .up(up_block_counter),
    .down(1'b0),
    .din(START_BLOCK),
    .dout(counter_block_o)
 );


 ///////////////iter_counter////////////////
 logic up_iter_counter;
 logic [31:0] counter_iter_o;
 logic rst_iter_counter;
 logic [31:0] base_iter;
 assign base_iter = ((counter_iter_o) * ((BLOCK_SIZE<<3)+4));
 counter #(.DATA_WIDTH(32)) counter_iter_block(
    .clk(clk),
    .rst(rst_iter_counter),
    .up(up_iter_counter),
    .down(1'b0),
    .din(32'b0),
    .dout(counter_iter_o)
 );

  ////////////bytes counter ////////////////////

 logic up_bytes_counter;
 logic [15:0] counter_bytes_o;
 logic rst_bytes_counter;
 counter #(.DATA_WIDTH(16)) counter_bytes(
    .clk(clk),
    .rst(rst_bytes_counter),
    .up(up_bytes_counter),
    .down(1'b0),
    .din(16'b0),
    .dout(counter_bytes_o)
 );

 //////////////index_counter////////////////////
 
 logic up_index;
 logic [7:0] index_o;
 logic rst_index;
 counter #(.DATA_WIDTH(8)) counter_index(
    .clk(clk),
    .rst(rst_index),
    .up(up_index),
    .down(1'b0),
    .din(8'h0),
    .dout(index_o)
 );


 ///////////////memory////////////////
 logic memory_inst_write;
 logic [7:0] memory_inst_o;

 memory_module #(.ADDR(16),
                 .DATA_WIDTH(8))
 memory_inst(
    .clk(clk),
    .addr(counter_bytes_o),
    .r_w(memory_inst_write),
    .din(spi_data_out),
    .dout(memory_inst_o)
 );






 ///////////////states/////////////////////
  logic [31:0] j;

 typedef enum logic[4:0] { INITIAL_CONDITION,IDLE,BEGIN_READ_FROM_SD,WAIT_RST_SPI,SEL_SD_BLOCK,WAIT_BLOCK,READ_DATA,WAIT_BYTE,READ_BYTE,CHECK_SIGNATURE,START_TEST,WAIT_UNTIL_END_TEST_OR_TIMEOUT,END_TEST,SEL_WRITE_SD_BLOCK,WAIT_W_BLOCK,WRITE_DATA,WAIT_W_BYTE,UPDATE_BLOCK_COUNTER,END_FSM } state_t;
 state_t current_state,next_state;

 always_comb begin
     next_state = current_state;

     up_block_counter = 0;
     rst_block_counter = 0;

     up_timer_counter = 0;
     rst_timer_counter = 0;

     up_bytes_counter = 0;
     rst_bytes_counter = 0;

     up_iter_counter = 0;
     rst_iter_counter = 0;

     rst_index = 0;
     up_index = 0;


     spi_r_block = 0;
     spi_r_byte = 0;
     spi_r_multi_block = 0;
     spi_rst = 0;
     spi_w_block = 0;
     spi_w_byte = 0;

     reg_spi_data_cl = 0;
     reg_spi_data_w = 0;
     reg_spi_data_in = 8'hff;

     memory_inst_write = 0;


     rst_uut = 0;

     for (j=0;j<4;j=j+1) begin
         reg_signature_cl[j] = 0;
         reg_signature_w[j] = 0;
     end

     reg_iteration_cl = 0;
     reg_iteration_w = 0;

     for (j=0;j<(IV_INPUT_SIZE>>3);j=j+1) begin
         reg_iv_i_uut_cl[j] = 0;
         reg_iv_i_uut_w[j] = 0;
     end

     for (j=0;j<(KEY_INPUT_SIZE>>3);j=j+1) begin
         reg_key_uut_cl[j] = 0;
         reg_key_uut_w[j] = 0;
     end

     reg_block_o_uut_o_cl = 0;
     reg_block_o_uut_o_w = 0;
        

     case(current_state)
        INITIAL_CONDITION :
            begin
                rst_block_counter = 1;
                next_state = IDLE;
            end
         IDLE:
             begin

                 rst_timer_counter = 1;
                 rst_iter_counter = 1;
                 rst_bytes_counter = 1;
                 rst_index = 1;

                 rst_uut = 1;

                 for (j=0;j<4;j=j+1) begin
                    reg_signature_cl[j] = 1;
                 end
                 

                 reg_iteration_cl = 1;

                 for (j=0;j<(IV_INPUT_SIZE>>3);j=j+1) begin
                    reg_iv_i_uut_cl[j] = 1;
                 end

                 for (j=0;j<(KEY_INPUT_SIZE>>3);j=j+1) begin
                    reg_key_uut_cl[j] = 1;
                 end
                 

                 
                 reg_block_o_uut_o_cl = 1;
                 

                 reg_spi_data_cl = 1;

                 next_state = BEGIN_READ_FROM_SD;
             end
         BEGIN_READ_FROM_SD:
             begin
                 rst_uut = 1;
                 spi_rst = 1;
                 if(spi_busy == 1'b1)
                     next_state = WAIT_RST_SPI;
             end
         WAIT_RST_SPI:
             begin
                 rst_uut = 1;
                 if(spi_busy == 1'b0)
                     next_state = SEL_SD_BLOCK;

             end
         SEL_SD_BLOCK:
             begin
                 rst_uut = 1;
                 spi_r_block = 1;
                 if(spi_busy == 1)
                     next_state = WAIT_BLOCK;
             end
         WAIT_BLOCK:
             begin
                 rst_uut = 1;
                 spi_r_block = 1;
                 if(spi_busy == 1'b0)
                     next_state = READ_DATA;
             end
         READ_DATA:
             begin
                 rst_uut = 1;
 		         spi_r_block = 1;

                 next_state = READ_BYTE;
 		              case(counter_bytes_o)
 		                32'h0:reg_signature_w[3] = 1;
                        32'h1:reg_signature_w[2] = 1;
                        32'h2:reg_signature_w[1] = 1;
                        32'h3:reg_signature_w[0] = 1;
                        32'h4:reg_iteration_w = 1;
                        32'h5 + index_o : begin
                            reg_iv_i_uut_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (IV_INPUT_SIZE>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h5 + (IV_INPUT_SIZE>>3) + index_o : begin
                            reg_key_uut_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (KEY_INPUT_SIZE>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h200: next_state = CHECK_SIGNATURE;
                   default:
                     begin
                         memory_inst_write = 1;
                     end
 		        endcase
             end
         READ_BYTE:
             begin
                 rst_uut = 1;
                 spi_r_block = 1;
                 spi_r_byte = 1;

                 if(spi_busy == 1)
                 begin
                     next_state = WAIT_BYTE;
                     up_bytes_counter = 1;
                 end

             end
         WAIT_BYTE:
             begin
                 rst_uut = 1;
                 spi_r_block = 1;
                 if(spi_busy == 1'b0)
                 begin
                     next_state = READ_DATA;
                 end
             end
         CHECK_SIGNATURE:
             begin
               rst_uut = 1;
               
               if(signature == 32'hAABBCCDD)
               begin
                 next_state = START_TEST;
               end
               else
                 next_state = END_FSM;
                 
             end
          START_TEST:
             begin
               next_state = WAIT_UNTIL_END_TEST_OR_TIMEOUT;
             end
          WAIT_UNTIL_END_TEST_OR_TIMEOUT:
             begin
               up_timer_counter = 1;
               if(end_uut) begin                 
                    next_state = END_TEST; 
               end
               
               
               else if(counter_timer_o >= 64'hFFFFFFFFFFFFFFF0)
                 next_state = END_TEST;
               
             end
          END_TEST:
             begin
               reg_block_o_uut_o_w = 1;
               rst_index = 1'b1;
               up_bytes_counter  = 1'b1;
               if(spi_busy == 1'b0 && counter_bytes_o > 16'hF000) begin
                   next_state = SEL_WRITE_SD_BLOCK;
                   rst_bytes_counter = 1'b1;
               end    


             end
          SEL_WRITE_SD_BLOCK:
             begin
                 spi_w_block = 1;
                 next_state = WAIT_W_BLOCK;
             end
          WAIT_W_BLOCK:
             begin
                 spi_w_block = 1;
                 if(spi_busy == 1'b0)
                     next_state = WRITE_DATA;
             end
          WRITE_DATA:
             begin
                 spi_w_block = 1;
                 spi_w_byte = 1;
                 reg_spi_data_w = 1;

                 
                 if(spi_busy == 1'b1) begin
                     next_state = WAIT_W_BYTE;
                 end    
                 

                 case(counter_bytes_o)
                   32'h0: reg_spi_data_in = signature[31:24];
                   32'h1: reg_spi_data_in = signature[23:16];
                   32'h2: reg_spi_data_in = signature[15:8];
                   32'h3: reg_spi_data_in = signature[7:0];
                   32'h4: reg_spi_data_in = reg_iteration_o;
                   32'h5 + index_o : begin
                          reg_spi_data_in = iv_uut >> (index_o * 8);
                   end
                   32'h5 + (IV_INPUT_SIZE>>3) + index_o : begin
                          reg_spi_data_in = key_uut >> (index_o*8);
                   end
                   BASE_OUTPUTS + base_iter + index_o : begin
                          reg_spi_data_in = block_o_uut_o >> (index_o * 8);     
                   end
                   
                   BASE_OUTPUTS + (BLOCK_SIZE>>3) + base_iter + index_o : begin
                          reg_spi_data_in = counter_timer_o >> (index_o * 8);    
                   end
                   
                   32'h200:;
                   32'h201:;
                   32'h202:;
                   32'h203:
                     begin
                         next_state = UPDATE_BLOCK_COUNTER;
                         rst_bytes_counter = 1;
                         up_iter_counter = 1;
                     end
                   default: begin
                            reg_spi_data_in = memory_inst_o;
                        end
                 endcase
             end   
          WAIT_W_BYTE:
             begin
                 spi_w_block = 1;
                 if(spi_busy == 1'b0)
                 begin
                     up_index = 1'b1;
                     //rst inicio inputs
                     if(counter_bytes_o == 32'h4) begin
                        rst_index = 1'b1;
                     end
                     else if(counter_bytes_o == 32'h5+((IV_INPUT_SIZE>>3)-1)) begin
                        rst_index = 1'b1;
                     end
                     
                     //rst inicio outputs
                     else if(counter_bytes_o == BASE_OUTPUTS + base_iter - 1) begin
                        rst_index = 1'b1;
                     end
                     else if(counter_bytes_o == BASE_OUTPUTS + (BLOCK_SIZE>>3) + base_iter-1) begin
                        rst_index = 1'b1;
                     end
                     
                     //rst_final outputs
                     else if (counter_bytes_o == BASE_OUTPUTS + (BLOCK_SIZE>>3) + base_iter + 7) begin
                        rst_index = 1'b1;
                     end
                     
                     up_bytes_counter = 1;
                     next_state = WRITE_DATA;
                 end
             end
          UPDATE_BLOCK_COUNTER:
             begin
                 rst_index = 1'b1;
                 rst_uut = 1;
                 rst_timer_counter = 1;
                 up_bytes_counter = 1;

                 if(counter_timer_o == 32'h0 && counter_bytes_o > 16'hF000)
                 begin
                    if(reg_iteration_o > counter_iter_o)
                      begin
                        rst_bytes_counter = 1;
                        next_state = BEGIN_READ_FROM_SD;
                      end
                    else
                      begin
                        up_block_counter = 1;
                        next_state = IDLE;
                      end
                 end

             end
          END_FSM:
            begin
            end
     endcase
 end

 always_ff @(posedge clk)
 begin
     if(rst == 1)
         current_state <= INITIAL_CONDITION;
     else
         current_state <= next_state;
 end


 assign debug_signal = {counter_block_o[7:0],base_iter[7:0],counter_iter_o[7:0],3'h0,current_state};


 endmodule : fsm_autotest
