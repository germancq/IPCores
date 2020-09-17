/**
 * @ Author: German Cano Quiveu, germancq
 * @ Create Time: 2020-09-17 13:20:37
 * @ Modified by: Your name
 * @ Modified time: 2020-09-17 16:05:44
 * @ Description:
 */



 module fsm_autotest #(
  parameter INPUT_SIZE_1 = 32,
  parameter INPUT_SIZE_2 = 32,
  parameter INPUT_SIZE_3 = 32,
  parameter INPUT_SIZE_4 = 32,
  parameter OUTPUT_SIZE_1 = 32)
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
     input end_uut,
     //uut paramters signals
     output [INPUT_SIZE_1-1:0] input_to_UUT_1,
     output [INPUT_SIZE_2-1:0] input_to_UUT_2,
     output [INPUT_SIZE_3-1:0] input_to_UUT_3,
     output [INPUT_SIZE_4-1:0] input_to_UUT_4,
     //uut results signals
     input [OUTPUT_SIZE_1-1:0] output_from_UUT_1,
     //debug
     input [1:0] sw_debug,
     output [31:0] debug_signal
     );

//logic [31:0] num_blocks_uut;

localparam BASE_OUTPUTS = 32'h4 + 32'd32 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + (INPUT_SIZE_3>>3) + (OUTPUT_SIZE_1>>3);

localparam START_BLOCK = 32'h100000;

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

  ////////////n_block_uut/////////////////////
  logic [31:0] n_blocks_uut;
  logic [0:0] reg_n_block_uut_cl[(32'hd32>>3)-1:0];
  logic [0:0] reg_n_block_uut_w[(32'hd32>>3)-1:0];
  generate
    for (i=0;i<(32>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_n_blocks_uut_i(
            .clk(clk),
            .cl(reg_n_block_uut_cl[i]),
            .w(reg_n_block_uut_w[i]),
            .din(spi_data_out),
            .dout(n_blocks_uut[(i<<3)+7:(i<<3)])
        );
    end
 endgenerate

  ////////////expected_result///////////////
  logic [OUTPUT_SIZE_1-1:0] expected_result;
  logic [0:0] reg_expected_result_uut_cl[(OUTPUT_SIZE_1>>3)-1:0];
  logic [0:0] reg_expected_result_uut_w[(OUTPUT_SIZE_1>>3)-1:0];
  generate
    for (i=0;i<(OUTPUT_SIZE_1>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_expected_result_i(
            .clk(clk),
            .cl(reg_expected_result_uut_cl[i]),
            .w(reg_expected_result_uut_w[i]),
            .din(spi_data_out),
            .dout(expected_result[(i<<3)+7:(i<<3)])
        );
    end
  endgenerate
 
  //////////////output_from_UUT_1////////////
  logic [OUTPUT_SIZE_1-1:0] output_from_UUT_1_o;
  logic reg_output_from_UUT_1_o_cl;
  logic reg_output_from_UUT_1_o_w;
  register #(.DATA_WIDTH(OUTPUT_SIZE_1)) reg_output_from_UUT_1_o_0(
  	.clk(clk),
  	.cl(reg_output_from_UUT_1_o_cl),
  	.w(reg_output_from_UUT_1_o_w),
  	.din(output_from_UUT_1),
  	.dout(output_from_UUT_1_o)
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
    .din(32'b0),
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

 /////////////num_block counter/////////////////
 logic up_num_block_counter;
 logic [INPUT_SIZE_4-1:0] input_to_UUT_4;
 logic rst_num_block_counter;
 counter #(.DATA_WIDTH(INPUT_SIZE_4)) counter_block(
    .clk(clk),
    .rst(rst_num_block_counter),
    .up(up_num_block_counter),
    .down(1'b0),
    .din(0),
    .dout(input_to_UUT_4)
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
  localparam CHECK_NUM_BLOCK = 5'hE;
  localparam READ_PLAINTEXT_AND_EXPECTED_RESULT = 5'hF;
  localparam UPDATE_BLOCK_COUNTER = 5'h10;
  localparam END_FSM = 5'h11;

 logic [4:0] current_state;
 logic [4:0] next_state;
 logic [4:0] prev_state;
    /*
    prev state
    */
    logic r_state_prev_cl;
    logic r_state_prev_w;
    logic [4:0] r_state_prev_i;
    logic [4:0] r_state_prev_o;
    register #(.DATA_WIDTH(5)) r_state_prev(
        .clk(clk),
        .cl(r_state_prev_cl),
        .w(r_state_prev_w),
        .din(r_state_prev_i),
        .dout(r_state_prev_o)
    );
    assign prev_state = r_state_prev_o;

   /////////////////////////////////

 always_comb begin
     next_state = current_state;

     up_block_counter = 0;
     rst_block_counter = 0;

     up_timer_counter = 1;
     rst_timer_counter = 0;

     up_timer_exec_counter = 0;
     rst_timer_exec_counter = 0;

     up_error_counter = 0;
     rst_error_counter = 0;

     up_bytes_counter = 0;
     rst_bytes_counter = 0;

     up_num_block_counter = 0;
     rst_num_block_counter = 0;

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

     r_state_prev_cl = 1'b0;
     r_state_prev_w = 1'b0;
     r_state_prev_i = current_state;


     rst_uut = 0;

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

     for (j=0;j<4;j=j+1) begin
         reg_n_block_uut_cl[j] = 0;
         reg_n_block_uut_w[j] = 0;
     end

     for (j=0;j<(OUTPUT_SIZE_1>>3);j=j+1) begin
         reg_expected_result_uut_cl[j] = 0;
         reg_expected_result_uut_w[j] = 0;
     end

     reg_output_from_UUT_1_o_cl = 0;
     reg_output_from_UUT_1_o_w = 0;
        

     case(current_state)
        INITIAL_CONDITION :
            begin
                rst_block_counter = 1;
                rst_error_counter = 1;
                rst_num_block_counter = 1;
                rst_timer_counter = 1;
                r_state_prev_cl = 1'b1;
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
                 rst_num_block_counter = 1;
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

                 for (j=0;j<(OUTPUT_SIZE_1>>3);j=j+1) begin
                    reg_expected_result_uut_cl[j] = 1;
                 end

                 for (j=0;j<4;j=j+1) begin
                    reg_n_block_uut_cl[j] = 1;
                end
                 

                 reg_output_from_UUT_1_o_cl = 1;
                
                 

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
 		         spi_r_block = 1;
                 r_state_prev_w = 1'b1;

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
                            reg_n_block_uut_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (32>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + (32>>3) + index_o : begin
                            reg_din_3_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (INPUT_SIZE_3>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + (INPUT_SIZE_3>>3) + (32>>3)  + index_o:begin
                            reg_expected_result_uut_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (OUTPUT_SIZE_1>>3)-1) begin
                                rst_index = 1'b1;
                                next_state = CHECK_SIGNATURE;
                            end
                        end
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
                     up_bytes_counter = 1;
                 end

             end
         WAIT_BYTE:
             begin
                 rst_uut = 1;
                 spi_r_block = 1;
                 if(spi_busy == 1'b0)
                 begin
                     next_state = prev_state;
                 end
             end
         CHECK_SIGNATURE:
             begin
               rst_uut = 1;
               spi_r_block = 1;
               if(signature == 32'hAABBCCDD)
               begin
                 next_state = START_TEST;
               end
               else
                 next_state = END_FSM;
             end
          START_TEST:
             begin
               spi_r_block = 1;  
               next_state = WAIT_UNTIL_END_TEST_OR_TIMEOUT;
             end
          WAIT_UNTIL_END_TEST_OR_TIMEOUT:
             begin
               spi_r_block = 1;
               up_timer_exec_counter = 1;
               if(end_uut)
                 next_state = END_TEST;
             end
          END_TEST:
             begin
               spi_r_block = 1;
               rst_index = 1'b1;
               reg_output_from_UUT_1_o_w = 1;
               rst_bytes_counter = 1'b1;
               if(spi_busy == 1'b0 && index_o == 16'h0) begin
                   next_state = COMPARE_RESULT;  
               end    
             end
          COMPARE_RESULT:
             begin
                 spi_r_block = 1;
                 if(expected_result != output_from_UUT_1_o) begin
                     up_error_counter = 1'b1;
                     //next_state = SEL_WRITE_SD_BLOCK;
                 end
                 //aumentar contador de num_block
                 up_num_block_counter = 1;
                 next_state = CHECK_NUM_BLOCK;//UPDATE_BLOCK_COUNTER;
                     
             end   
          CHECK_NUM_BLOCK:
             begin
                  spi_r_block = 1;
                  rst_uut = 1;
                  rst_index = 1;
                 //comprobar si counter_num_block == num_blocks_uut
                  if(input_to_UUT_4 == num_blocks_uut) begin
                      next_state = READ_PLAINTEXT_AND_EXPECTED_RESULT;
                  end
                  else begin
                      next_state = UPDATE_BLOCK_COUNTER;
                  end
             end   
          READ_PLAINTEXT_AND_EXPECTED_RESULT:
             begin
                 spi_r_block = 1;
                 rst_uut = 1;
                 r_state_prev_w = 1'b1;
                 //leer plaintext
                 //leer expected result
                 //next state START_TEST
                 next_state = READ_BYTE;
 		            case(counter_bytes_o)
                        index_o : begin
                            reg_din_3_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (INPUT_SIZE_3>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        (INPUT_SIZE_3>>3) + index_o:begin
                            reg_expected_result_uut_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (OUTPUT_SIZE_1>>3)-1) begin
                                rst_index = 1'b1;
                                next_state = START_TEST;
                            end
                        end
                        default:;
 		            endcase
             end   
          UPDATE_BLOCK_COUNTER:
             begin
                 rst_index = 1'b1;
                 rst_uut = 1;
                 rst_timer_exec_counter = 1;
                 up_bytes_counter = 1;

                 if(counter_timer_exec_o == 64'h00)
                 begin
                    next_state = IDLE;
                    up_block_counter = 1;
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
     .a({counter_block_o[15:0],3'h0,current_state}),
     .b(counter_timer_o[31:0]),
     .c(counter_timer_o[63:32]),
     .d(counter_error_o),
     .e(debug_signal),
     .sel(sw_debug)
 );


 endmodule : fsm_autotest
