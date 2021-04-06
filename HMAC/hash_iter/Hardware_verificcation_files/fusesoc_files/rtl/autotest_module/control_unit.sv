/**
 * @ Author: German Cano Quiveu, germancq@dte.us.es
 * @ Create Time: 2020-06-26 21:42:54
 * @ Modified by: German Cano Quiveu, germancq@dte.us.es
 * @ Modified time: 2021-04-06 22:16:52
 * @ Description:
 */


 module control_unit_feed #(
  parameter FEED_DATA_SIZE = 32,
  parameter INPUT_SIZE_1 = 64,
  parameter OUTPUT_SIZE_1 = 32)
 (
     input clk,
     input rst,
     input start,
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
     input err_uut,
     input end_uut,
     output logic feed_data_control_uut,
     input busy_uut,
     output logic stop_feed_uut,
     //uut paramters signals
     output [FEED_DATA_SIZE-1:0] feed_data_uut,
     output [INPUT_SIZE_1-1:0] input_to_UUT_1,
     //uut results signals
     input [OUTPUT_SIZE_1-1:0] output_from_UUT_1,
     //debug
     input [1:0] sw_debug,
     output [31:0] debug_signal
     );


localparam BASE_OUTPUTS = 32'h4 + (32>>3) + (64>>3) + (INPUT_SIZE_1>>3) + (OUTPUT_SIZE_1>>3);

localparam START_BLOCK = 32'h100000;
localparam TIMEOUT_VALUE = 64'h30000000;
localparam SIGNATURE = 32'hAABBCCDD;

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

  logic [0:0] input_uut_1_cl[(INPUT_SIZE_1>>3)-1:0];
  logic [0:0] input_uut_1_w[(INPUT_SIZE_1>>3)-1:0];
  generate
    for (i=0;i<(INPUT_SIZE_1>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_input_uut_1_i(
            .clk(clk),
            .cl(input_uut_1_cl[i]),
            .w(input_uut_1_w[i]),
            .din(spi_data_out),
            .dout(input_to_UUT_1[(i<<3)+7:(i<<3)])
        );
    end
  endgenerate


///////////microSD registers//////////////////////////////////
  /////   next_block register /////////////////////////////////
  logic [31:0] next_block_o;
  logic [0:0] next_block_cl[3:0];
  logic [0:0] next_block_w[3:0];
  generate
    for (i=0;i<4;i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_expected_result_i(
            .clk(clk),
            .cl(next_block_cl[i]),
            .w(next_block_w[i]),
            .din(spi_data_out),
            .dout(next_block_o[(i<<3)+7:(i<<3)])
        );
    end
  endgenerate

  ////////////bytes to hash /////////////////
  logic [63:0] total_bytes_o;
  logic [0:0] total_bytes_cl [7:0];
  logic [0:0] total_bytes_w [7:0];
  generate
    for (i=0;i<4;i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_total_bytes_i(
            .clk(clk),
            .cl(total_bytes_cl[i]),
            .w(total_bytes_w[i]),
            .din(spi_data_out),
            .dout(total_bytes_o[(i<<3)+7:(i<<3)])
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


/////////////// feed_data_reg ///////////////////
  logic [0:0] feed_data_cl[(FEED_DATA_SIZE>>3)-1:0];
  logic [0:0] feed_data_w[(FEED_DATA_SIZE>>3)-1:0];
  generate
    for (i=0;i<(FEED_DATA_SIZE>>3);i=i+1) begin
        register #(.DATA_WIDTH(8)) reg_feed_data_i(
            .clk(clk),
            .cl(feed_data_cl[(FEED_DATA_SIZE>>3)-1-i]), //big endian
            .w(feed_data_w[(FEED_DATA_SIZE>>3)-1-i]),
            .din(spi_data_out),
            .dout(feed_data_uut[(i<<3)+7:(i<<3)])
        );
    end
  endgenerate
  

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


///////////////block register //////////////
  logic [31:0] current_block_o;
  logic current_block_cl;
  logic current_block_w;
  register_initial_state #(.DATA_WIDTH(32)) current_block_reg(
  	.clk(clk),
  	.cl(current_block_cl),
  	.w(current_block_w),
    .initial_state(START_BLOCK),
  	.din(next_block_o),
  	.dout(current_block_o)
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
    .din(current_block_o),
    .dout(counter_block_o)
 );

  ////////////bytes counter ////////////////////

 logic up_bytes_counter;
 logic [63:0] counter_bytes_o;
 logic rst_bytes_counter;
 counter #(.DATA_WIDTH(64)) counter_bytes(
    .clk(clk),
    .rst(rst_bytes_counter),
    .up(up_bytes_counter),
    .down(1'b0),
    .din(64'b0),
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
  localparam READ_CONTROL_BLOCK = 5'h6;
  localparam WAIT_BYTE = 5'h7;
  localparam READ_BYTE = 5'h8;
  localparam CHECK_SIGNATURE = 5'h9;
  localparam START_TEST = 5'hA;
  localparam SEL_SD_BLOCK_CMD18 = 5'hB;
  localparam WAIT_BLOCK_CMD18 = 5'hC;
  localparam READ_FEED_DATA = 5'hD;
  localparam READ_FEED_DATA_BYTE = 5'hE;
  localparam WAIT_FEED_BYTE = 5'hF;
  localparam FEED_CONTROL = 5'h10;
  localparam STOP_FEED = 5'h11;
  localparam WAIT_UNTIL_END_TEST_OR_TIMEOUT = 5'h12;
  localparam END_TEST = 5'h13;
  localparam COMPARE_RESULT = 5'h14;
  localparam SEL_WRITE_SD_BLOCK = 5'h15;
  localparam WAIT_W_BLOCK = 5'h16;
  localparam WRITE_DATA = 5'h17;
  localparam WAIT_W_BYTE = 5'h18;
  localparam UPDATE_NEXT_CONTROL_BLOCK = 5'h19;
  localparam END_FSM = 5'h1A;
  localparam WAIT_BUSY_UUT_0 = 5'h1B;
  localparam WAIT_BUSY_UUT_1 = 5'h1C;

 logic [4:0] current_state;
 logic [4:0] next_state;

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

     rst_index = 0;
     up_index = 0;

     current_block_cl = 0;
     current_block_w = 0;



     spi_r_block = 0;
     spi_r_byte = 0;
     spi_r_multi_block = 0;
     spi_rst = 0;
     spi_w_block = 0;
     spi_w_byte = 0;

     reg_spi_data_cl = 0;
     reg_spi_data_w = 0;
     reg_spi_data_in = 8'hff;


     rst_uut = 0;
     feed_data_control_uut = 0;
     stop_feed_uut = 0;

     for (j=0;j<4;j=j+1) begin
         reg_signature_cl[j] = 0;
         reg_signature_w[j] = 0;
     end

     for (j=0;j<(INPUT_SIZE_1>>3);j=j+1)begin
         input_uut_1_cl[j] = 0;
         input_uut_1_w[j] = 0;
     end

     for (j=0;j<(32>>3);j=j+1) begin
         next_block_cl[j] = 0;
         next_block_w[j] = 0;
     end

     for (j=0;j<(64>>3);j=j+1) begin
         total_bytes_cl[j] = 0;
         total_bytes_w[j] = 0;
     end

     for (j=0;j<(OUTPUT_SIZE_1>>3);j=j+1) begin
         reg_expected_result_uut_cl[j] = 0;
         reg_expected_result_uut_w[j] = 0;
     end

     for (j=0;j<(FEED_DATA_SIZE>>3);j=j+1) begin
         feed_data_cl[j] = 0;
         feed_data_w[j] = 0;
     end

     reg_output_from_UUT_1_o_cl = 0;
     reg_output_from_UUT_1_o_w = 0;
        

     case(current_state)
        INITIAL_CONDITION :
            begin
                up_timer_counter = 0;
                if (start == 1'b1) begin
                    rst_block_counter = 1;
                    rst_error_counter = 1;
                    rst_timer_counter = 1;
                    current_block_cl = 1;
                    next_state = BEGIN_READ_FROM_SD;
                end
                
            end
         BEGIN_READ_FROM_SD:
             begin
                 rst_uut = 1;
                 spi_rst = 1;
                 rst_block_counter = 1;
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

                 for (j=0;j<(INPUT_SIZE_1>>3);j=j+1)begin
                    input_uut_1_cl[j] = 1;
                end

                 for (j=0;j<(32>>3);j=j+1) begin
                    next_block_cl[j] = 1;
                 end

                 for (j=0;j<(64>>3);j=j+1) begin
                    total_bytes_cl[j] = 1;
                 end


                 for (j=0;j<(OUTPUT_SIZE_1>>3);j=j+1) begin
                    reg_expected_result_uut_cl[j] = 1;
                 end

                 for (j=0;j<(FEED_DATA_SIZE>>3);j=j+1) begin
                    feed_data_cl[j] = 1;
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
                     next_state = READ_CONTROL_BLOCK;
             end
         READ_CONTROL_BLOCK:
             begin
                 rst_uut = 1;
 		         spi_r_block = 1;

                 next_state = READ_BYTE;
 		            case(counter_bytes_o)
 		                32'h0:reg_signature_w[3] = 1;
                        32'h1:reg_signature_w[2] = 1;
                        32'h2:reg_signature_w[1] = 1;
                        32'h3:reg_signature_w[0] = 1;
                        32'h4 + index_o : begin
                            input_uut_1_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (INPUT_SIZE_1>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h4 + (INPUT_SIZE_1>>3) + index_o : begin
                            next_block_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (32>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h4 + (INPUT_SIZE_1>>3) + (32>>3) + index_o:begin
                            total_bytes_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (64>>3)-1) begin
                                rst_index = 1'b1;
                            end
                        end
                        32'h4 + (INPUT_SIZE_1>>3) + (32>>3) + (64>>3) + index_o:begin
                            reg_expected_result_uut_w[index_o] = 1'b1;
                            up_index = 1'b1;
                            if(index_o == (OUTPUT_SIZE_1>>3)-1) begin
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
                     up_bytes_counter = 1;
                 end

             end
         WAIT_BYTE:
             begin
                 rst_uut = 1;
                 spi_r_block = 1;
                 if(spi_busy == 1'b0)
                 begin
                     next_state = READ_CONTROL_BLOCK;
                 end
             end
         CHECK_SIGNATURE:
             begin
               rst_uut = 1;
               rst_block_counter = 1;
               if(signature == SIGNATURE)
               begin
                 next_state = START_TEST;
               end
               else
                 next_state = END_FSM;
             end
////////////////////////////////////////////////////////////////////////////////
          /*
            0. START_TEST
            1. POINT TO_NEXT_BLOCK
            2. SEL_SD_BLOCK_CMD18
            3. CHECK IF IT IS FINAL BYTE
                TRUE : GOTO STOP_FEED
                FALSE : READ_DATA_BLOCK 
            4. WAIT_UNTIL BUSY == 0
            5. RAISE 1 cycle FEED_CONTROL
            6. GO TO 3
            7. STOP_FEED raise 1 cyclestop_feed
            8. WAIT UNTIL end_uut
            9. END_TEST
            10.COMPARE RESULTS
            11. SEL SD_ORIGINAL_CONTROL_BLOCK
            12. SEL_WRITE_SD_BLOCK
            13. UPDATE REG ORIGINAL_SD_COTROL_BLOCK WITH NEXT_BLOCK BEFORE NEXT_TEST
            
        
          */

          START_TEST: 
            begin
                if(spi_busy == 0) begin
                    up_timer_exec_counter = 1;
                    up_block_counter = 1'b1;
                    next_state = SEL_SD_BLOCK_CMD18;
                    rst_bytes_counter = 1'b1;
                end
            end  
          SEL_SD_BLOCK_CMD18:
            begin
                up_timer_exec_counter = 1;
                spi_r_multi_block = 1;
                 if(spi_busy == 1) begin
                     next_state = WAIT_BLOCK_CMD18;
                 end      
            end  
          WAIT_BLOCK_CMD18:
            begin
                up_timer_exec_counter = 1;
                spi_r_multi_block = 1;
                if(spi_busy == 1'b0)
                     next_state = READ_FEED_DATA;
            end  
            READ_FEED_DATA:
            begin
                up_timer_exec_counter = 1;
                feed_data_w[index_o] = 1'b1;
                spi_r_multi_block = 1;
                next_state = READ_FEED_DATA_BYTE;
                up_index = 1;
            end
            READ_FEED_DATA_BYTE:
             begin
                 up_timer_exec_counter = 1;
                 spi_r_multi_block = 1;
                 spi_r_byte = 1;

                 if(spi_busy == 1)
                 begin
                     next_state = WAIT_FEED_BYTE;
                     up_bytes_counter = 1;
                 end

             end
            WAIT_FEED_BYTE:
             begin
                 up_timer_exec_counter = 1;
                 spi_r_multi_block = 1;
                 if(spi_busy == 1'b0)
                 begin
                     if((FEED_DATA_SIZE >> 3) == index_o) begin
                            next_state = FEED_CONTROL;
                            rst_index = 1'b1;
                        end
                        else begin
                            next_state = READ_FEED_DATA;
                        end
                 end
             end  
            FEED_CONTROL : 
                begin
                    up_timer_exec_counter = 1;
                    spi_r_multi_block = 1;
                    if(busy_uut == 0) begin
                        feed_data_control_uut = 1;
                        next_state = WAIT_BUSY_UUT_0;
                        if(counter_bytes_o >= total_bytes_o+1) begin
                            feed_data_control_uut = 0;
                            next_state = STOP_FEED;
                        end
                    end
                end
            WAIT_BUSY_UUT_0:begin
                up_timer_exec_counter = 1;
                spi_r_multi_block = 1;
                if(busy_uut == 1)
                    next_state = WAIT_BUSY_UUT_1;
            end        
            WAIT_BUSY_UUT_1:begin
                up_timer_exec_counter = 1;
                spi_r_multi_block = 1;
                if(busy_uut == 0) begin
                    next_state = READ_FEED_DATA;
                end
            end
            STOP_FEED : 
                begin
                    up_timer_exec_counter = 1;
                    stop_feed_uut = 1'b1;
                    next_state = WAIT_UNTIL_END_TEST_OR_TIMEOUT;
                end    
            WAIT_UNTIL_END_TEST_OR_TIMEOUT:
             begin
               up_timer_exec_counter = 1;
               rst_block_counter = 1;
               if(end_uut | err_uut)
                 next_state = END_TEST;  
               else if(counter_timer_exec_o > TIMEOUT_VALUE)
                 next_state = END_TEST;  
             end   
             END_TEST:
             begin
               rst_index = 1'b1;
               reg_output_from_UUT_1_o_w = 1;
               rst_bytes_counter = 1'b1;
               rst_block_counter = 1'b1;
               if(index_o == 16'h0) begin
                   next_state = COMPARE_RESULT;  
               end    
             end
            COMPARE_RESULT:
                begin
                    if(spi_busy == 1'b0) begin
                        next_state = SEL_WRITE_SD_BLOCK;
                        if((expected_result != output_from_UUT_1_o) || err_uut) 
                        begin
                            up_error_counter = 1'b1;
                            current_block_w = 1'b1;
                           
                        end
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
                   32'h4 + index_o : begin
                          reg_spi_data_in = input_to_UUT_1 >> (index_o * 8);
                   end
                   32'h4 + (INPUT_SIZE_1>>3) + index_o : begin
                          reg_spi_data_in = next_block_o >> (index_o * 8);
                   end
                   32'h4 + (INPUT_SIZE_1>>3) + (32>>3) + index_o : begin
                          reg_spi_data_in = total_bytes_o >> (index_o * 8);
                   end
                   32'h4 + (INPUT_SIZE_1>>3) + (32>>3) + (64>>3) + index_o : begin
                          reg_spi_data_in = expected_result >> (index_o * 8);     
                   end
                   BASE_OUTPUTS + index_o : begin
                          reg_spi_data_in = output_from_UUT_1_o >> (index_o * 8);     
                   end
                   BASE_OUTPUTS + (OUTPUT_SIZE_1>>3) + index_o : begin
                          reg_spi_data_in = counter_timer_exec_o >> (index_o * 8);    
                   end
                   32'h200:;
                   32'h201:;
                   32'h202:;
                   32'h203:
                     begin
                         next_state = UPDATE_NEXT_CONTROL_BLOCK;
                         current_block_w = 1'b1;
                     end
                   default:;
                 endcase
             end   
          WAIT_W_BYTE:
             begin
                 spi_w_block = 1;
                 if(spi_busy == 1'b0)
                 begin
                     up_index = 1'b1;
                     //rst inicio inputs
                     if(counter_bytes_o == 32'h3) begin
                        rst_index = 1'b1;
                     end
                     else if(counter_bytes_o == 32'h4+((INPUT_SIZE_1>>3)-1))begin
                        rst_index = 1'b1;
                     end
                     else if(counter_bytes_o == 32'h4 + (INPUT_SIZE_1>>3) + ((32>>3)-1)) begin
                        rst_index = 1'b1;
                     end
                     else if(counter_bytes_o == 32'h4 + (INPUT_SIZE_1>>3) + (32>>3) + ((64>>3)-1)) begin
                        rst_index = 1'b1;
                     end
                     //rst inicio outputs
                     else if(counter_bytes_o == BASE_OUTPUTS - 1) begin
                        rst_index = 1'b1;
                     end
                     //rst_final outputs
                     else if (counter_bytes_o == BASE_OUTPUTS + (OUTPUT_SIZE_1>>3) + 7) begin
                        rst_index = 1'b1;
                     end
                     up_bytes_counter = 1;
                     next_state = WRITE_DATA;
                 end
             end       
            UPDATE_NEXT_CONTROL_BLOCK : begin
                rst_uut = 1'b1;
                rst_block_counter = 1'b1;
                rst_bytes_counter = 1;
                if(counter_bytes_o == 0) begin
                    next_state = IDLE;
                end
            end
            END_FSM:
            begin
                up_timer_counter = 0;
                next_state = INITIAL_CONDITION;
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


 endmodule : control_unit_feed
