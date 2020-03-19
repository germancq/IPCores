/**
 * @Author: German Cano Quiveu <germancq>
 * @Date:   2019-03-01T13:21:14+01:00
 * @Email:  germancq@dte.us.es
 * @Filename: fsm_autotest.v
 * @Last modified by:   germancq
 * @Last modified time: 2019-04-05T13:26:09+02:00
 */

 module fsm_autotest 
 #(
     parameter INPUT_SIZE_1 = 32,
     parameter INPUT_SIZE_2 = 32,
     parameter INPUT_SIZE_3 = 32,
     parameter OUTPUT_SIZE = 32
 )
 (
     input clk,
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
     //uut ctrl signals
     output logic rst_uut,
     output logic start_uut,
     output logic ctrl_mux_uut,
     input err_uut,
     input end_uut,
     output [1:0] clk_uut_sel,
     //uut paramters signals
     output [INPUT_SIZE_1-1:0] input_to_UUT_1,
     output [INPUT_SIZE_2-1:0] input_to_UUT_2,
     output [INPUT_SIZE_3-1:0] input_to_UUT_3,
     //debug
     input [1:0] sw_debug,
     output [31:0] debug_signal
     );

localparam BASE_OUTPUTS = 32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + (INPUT_SIZE_3>>3);
localparam START_BLOCK = 32'h100000;
localparam TIMEOUT_VALUE = 64'h10000000;

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

///////////////////////////////////////////////////////////////////

//////////uut specific registers///////////////////////
  /////////////input_to_UUT_1////////////////
 
 logic [0:0] reg_din_1_cl[(INPUT_SIZE_1>>3)-1:0];
 logic [0:0] reg_din_1_w[(INPUT_SIZE_1>>3)-1:0];
 generate
    for (i=0;i<(INPUT_SIZE_1>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_input_to_UUT_1_i(
            .clk(clk),
            .cl(reg_din_1_cl[i]),
            .w(reg_din_1_w[i]),
            .din(spi_data_out),
            .dout(input_to_UUT_1[(i<<3)+7:(i<<3)])
        );
    end
 endgenerate

  /////////////input_to_UUT_2////////////////
 
 logic [0:0] reg_din_2_cl[(INPUT_SIZE_2>>3)-1:0];
 logic [0:0] reg_din_2_w[(INPUT_SIZE_2>>3)-1:0];
 generate
    for (i=0;i<(INPUT_SIZE_2>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_input_to_UUT_2_i(
            .clk(clk),
            .cl(reg_din_2_cl[i]),
            .w(reg_din_2_w[i]),
            .din(spi_data_out),
            .dout(input_to_UUT_2[(i<<3)+7:(i<<3)])
        );
    end
 endgenerate

  /////////////input_to_UUT_3////////////////
 
 logic [0:0] reg_din_3_cl[(INPUT_SIZE_3>>3)-1:0];
 logic [0:0] reg_din_3_w[(INPUT_SIZE_3>>3)-1:0];
 generate
    for (i=0;i<(INPUT_SIZE_3>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_input_to_UUT_3_i(
            .clk(clk),
            .cl(reg_din_3_cl[i]),
            .w(reg_din_3_w[i]),
            .din(spi_data_out),
            .dout(input_to_UUT_3[(i<<3)+7:(i<<3)])
        );
    end
 endgenerate

 
  //////////////output_err////////////
  logic [OUTPUT_SIZE-1:0] output_err_o;
  logic [OUTPUT_SIZE-1:0] input_err;
  logic reg_output_err_o_cl;
  logic reg_output_err_o_w;
  register #(.DATA_WIDTH(OUTPUT_SIZE)) reg_output_err_o_0(
  	.clk(clk),
  	.cl(reg_output_err_o_cl),
  	.w(reg_output_err_o_w),
  	.din(input_err),
  	.dout(output_err_o)
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

 ///////////////timer_execution//////////////////////
 logic up_timer_exec_counter;
 logic [63:0] counter_timer_exec_o;
 logic rst_timer_exec_counter;
 counter #(.DATA_WIDTH(64)) counter_timer_exec(
    .clk(clk),
    .rst(rst_timer_exec_counter),
    .up(up_timer_exec_counter),
    .down(1'b0),
    .din(64'b0),
    .dout(counter_timer_exec_o)
 );

 ///////////////error_counter//////////////////////
 logic up_error_counter;
 logic [31:0] counter_error_o;
 logic rst_error_counter;
 counter #(.DATA_WIDTH(32)) counter_error(
    .clk(clk),
    .rst(rst_error_counter),
    .up(up_error_counter),
    .down(1'b0),
    .din(32'b0),
    .dout(counter_error_o)
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
 logic [2:0] counter_iter_o;
 logic rst_iter_counter;
 logic [31:0] base_iter;
 assign base_iter = ((counter_iter_o) * ((OUTPUT_SIZE>>3)+8));
 assign clk_uut_sel = counter_iter_o;
 counter #(.DATA_WIDTH(3)) counter_iter_block(
    .clk(clk),
    .rst(rst_iter_counter),
    .up(up_iter_counter),
    .down(1'b0),
    .din(3'b0),
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

 memory_module #(.ADDR(10),
                 .DATA_WIDTH(8))
 memory_inst(
    .clk(clk),
    .addr(counter_bytes_o[9:0]),
    .r_w(memory_inst_write),
    .din(spi_data_out),
    .dout(memory_inst_o)
 );






 ///////////////states/////////////////////
  logic [31:0] j;

  localparam INITIAL_CONDITION = 5'h0;
  localparam BEGIN_READ_FROM_SD = 5'h1;
  localparam WAIT_RST_SPI = 5'h2;
  localparam IDLE = 5'h3;
  localparam SEL_SD_BLOCK = 5'h4;
  localparam WAIT_BLOCK = 5'h5;
  localparam READ_DATA = 5'h6;
  localparam WAIT_BYTE = 5'h7;
  localparam READ_BYTE = 5'h8;
  localparam CHECK_SIGNATURE = 5'h9;
  localparam START_TEST = 5'hA;
  localparam WAIT_UNTIL_END_TEST_OR_TIMEOUT = 5'hB;
  localparam END_TEST = 5'hC;
  localparam COMPARE_RESULT = 5'hD;
  localparam SEL_WRITE_SD_BLOCK = 5'hE;
  localparam WAIT_W_BLOCK = 5'hF;
  localparam WRITE_DATA = 5'h10;
  localparam WAIT_W_BYTE = 5'h11;
  localparam UPDATE_BLOCK_COUNTER = 5'h12;
  localparam END_FSM = 5'h13;

 logic [4:0] current_state;
 logic [4:0] next_state;

 always_comb begin
     next_state = current_state;

     up_block_counter = 0;
     rst_block_counter = 0;

     up_timer_counter = 1;
     rst_timer_counter = 0;

     up_error_counter = 0;
     rst_error_counter = 0;

     up_timer_exec_counter = 0;
     rst_timer_exec_counter = 0;

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
     start_uut = 0;
     ctrl_mux_uut = 0;

     for (j=0;j<4;j=j+1) begin
         reg_signature_cl[j] = 0;
         reg_signature_w[j] = 0;
     end

     for (j=0;j<(INPUT_SIZE_1>>3);j=j+1) begin
         reg_din_1_cl[j] = 0;
         reg_din_1_w[j] = 0;
     end

     for (j=0;j<(INPUT_SIZE_2>>3);j=j+1) begin
         reg_din_2_cl[j] = 0;
         reg_din_2_w[j] = 0;
     end
    
     for (j=0;j<(INPUT_SIZE_3>>3);j=j+1) begin
         reg_din_3_cl[j] = 0;
         reg_din_3_w[j] = 0;
     end


     reg_output_err_o_cl = 0;
     reg_output_err_o_w = 0;

     input_err = 0;
        

     case(current_state)
        INITIAL_CONDITION :
            begin
                rst_block_counter = 1;
                rst_error_counter = 1;
                rst_timer_counter = 1;
                rst_iter_counter = 1;
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
                     next_state = IDLE;

             end     
         IDLE:
             begin

                 rst_timer_exec_counter = 1;
                 rst_bytes_counter = 1;
                 rst_index = 1;

                 rst_uut = 1;

                 for (j=0;j<4;j=j+1) begin
                    reg_signature_cl[j] = 1;
                 end

                 for (j=0;j<(INPUT_SIZE_1>>3);j=j+1) begin
                    reg_din_1_cl[j] = 1;
                 end

                 for (j=0;j<(INPUT_SIZE_2>>3);j=j+1) begin
                    reg_din_2_cl[j] = 1;
                 end

                 for (j=0;j<(INPUT_SIZE_3>>3);j=j+1) begin
                    reg_din_3_cl[j] = 1;
                 end
                 

                 reg_output_err_o_cl = 1;
                 
                 

                 reg_spi_data_cl = 1;

                 if(spi_busy==0) begin
                    next_state = SEL_SD_BLOCK;
                 end 
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
                 memory_inst_write = 1;
 		         spi_r_block = 1;

                 next_state = READ_BYTE;
 		              case(counter_bytes_o)
 		                32'h0:reg_signature_w[3] = 1;
                        32'h1:reg_signature_w[2] = 1;
                        32'h2:reg_signature_w[1] = 1;
                        32'h3:reg_signature_w[0] = 1;
                        32'h4 + index_o : begin
                            reg_din_1_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (INPUT_SIZE_1>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h4 + (INPUT_SIZE_1>>3) + index_o : begin
                            reg_din_2_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (INPUT_SIZE_2>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + index_o : begin
                            reg_din_3_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (INPUT_SIZE_3>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h200: next_state = CHECK_SIGNATURE;
                   default:;
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
                     
                 end

             end
         WAIT_BYTE:
             begin
                 rst_uut = 1;
                 spi_r_block = 1;
                 if(spi_busy == 1'b0)
                 begin
                     up_bytes_counter = 1;
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
               start_uut = 1;
               ctrl_mux_uut = 1;
             end
          WAIT_UNTIL_END_TEST_OR_TIMEOUT:
             begin
               start_uut = 1;
               ctrl_mux_uut = 1;
               up_timer_exec_counter = 1;
               if(end_uut | err_uut)
                 next_state = END_TEST;
               else if(counter_timer_exec_o > TIMEOUT_VALUE)
                 next_state = END_TEST;    

             end
          END_TEST:
             begin
               rst_index = 1'b1;
               rst_bytes_counter = 1'b1;
                ctrl_mux_uut = 1;
               if(spi_busy == 1'b0 && index_o == 16'h00) begin
                   next_state = COMPARE_RESULT;
               end    
             end
          COMPARE_RESULT:
             begin
                 next_state = SEL_WRITE_SD_BLOCK;
                 reg_output_err_o_w = 1;
                 if(err_uut | counter_timer_exec_o > TIMEOUT_VALUE) begin
                     up_error_counter = 1'b1;
                     input_err = 1;
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
                   BASE_OUTPUTS + base_iter + index_o : begin
                          reg_spi_data_in = output_err_o >> (index_o * 8);     
                   end
                   
                   BASE_OUTPUTS + (OUTPUT_SIZE>>3) + base_iter + index_o : begin
                          reg_spi_data_in = counter_timer_exec_o >> (index_o * 8);    
                   end
                   32'h200:;
                   32'h201:;
                   32'h202:;
                   32'h203:
                     begin
                         next_state = UPDATE_BLOCK_COUNTER;
                         rst_bytes_counter = 1;
                         up_index = 1;
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
                     //rst inicio outputs
                     if(counter_bytes_o == BASE_OUTPUTS + base_iter - 1) begin
                        rst_index = 1'b1;
                     end
                     else if(counter_bytes_o == BASE_OUTPUTS + (OUTPUT_SIZE>>3) + base_iter-1) begin
                        rst_index = 1'b1;
                     end
                     
                     //rst_final outputs
                     else if (counter_bytes_o == BASE_OUTPUTS + (OUTPUT_SIZE>>3) + base_iter + 7) begin
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
                 rst_timer_exec_counter = 1;
                 up_bytes_counter = 1;

                 if(counter_bytes_o == 8'h20)
                 begin
                    next_state = BEGIN_READ_FROM_SD;
                    if(counter_iter_o < 3)
                      begin
                        rst_bytes_counter = 1;
                      end
                    else
                      begin
                        up_block_counter = 1;
                        rst_iter_counter = 1;
                      end  
                 end

             end
          END_FSM:
            begin
                up_timer_counter = 0;
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


 mux_4 #(.DATA_WIDTH(32)) mux_debug(
     .a({counter_block_o[15:0],5'h0,counter_iter_o[2:0],3'h0,current_state}),
     .b(counter_timer_o[31:0]),
     .c(counter_timer_o[63:32]),
     .d(counter_error_o),
     .e(debug_signal),
     .sel(sw_debug)
 );


 endmodule : fsm_autotest
