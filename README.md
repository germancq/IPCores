# IPCores

- Build an example from this git

    1. Download and install fusesoc
        get fusesoc from [here](https://github.com/olofk/fusesoc)

    2. Launch fusesoc with the cores from this git
        In this example we cover the PRESENT cipher, to build this project use the follow command:
        ```
        fusesoc --cores-root <path_to_git_folder>/gitProjects/IPCores/ build --target=synth present_system
        ```
        To get the latest updates of the cores, delete the cache before execute fusesoc (Only if there are an update in this repository):
        ```
        rm -r /home/$USER/.cache/fusesoc/*
        ```

    3. Upload the bitfile to the FPGA
        In our example, a build folder is created in the same location where the fusesoc core is executed. In this build folder a present_system_0 folder is created, this folder contains the bitfile along with the whole Vivado project.

    4. Create the test patterns and upload to the microSD
        Inside the git folder in the PRESENT folder, the python_code can create the test pattern for both the On-Chip verification and the CocoTB simulation. The command is the following:
        ```
        sudo python3 gen_testbench.py <microSD_path> <Number of tests> <error percentage>
        ```

    5. CocoTB
        To verify by CocoTB, get CocoTB from [here](https://github.com/cocotb/cocotb). In the cocotb_files execute the Makefile to simulate with CocoTB.

    6. Analyze the results from Autotest Core
        Inside the git folder in the PRESENT folder, in the path Hardware_verification_files/microSD_script_files is found the gen_results.py script. This script generates a spreadsheet with the data from the Autotest Core.
        ```
        sudo python3 gen_results.py <microSD_path>
        ```


- Autotest Core: user guide

    This guide is created to show how to use the templates of Autotest Core. In this example the PRESENT cipher has been chosen.

    1. Determine the inputs, outputs, reset and end_op from the IPCore
        - Inputs
            1. block_i : 64 bits
            2. key : 80 bits
            3. enc_dec : 1 bit (minimum 8 bit)
        - Outputs
            1. block_o : 64 bits
        - Rst and End_Op
            1. rst : 1 bit
            2. end_signal: 1 bit
    
    2. Modify autotest_core.sv 
        - add parameters and signals for all the inputs and outputs
            ```verilog
            module autotest_core
            #(parameter INPUT_SIZE_1 = 32,
            parameter INPUT_SIZE_2 = 32,
            parameter INPUT_SIZE_3 = 32,
            parameter OUTPUT_SIZE_1 = 32)
            (
                input clk,
                input rst,
                input start,

                output cs,
                output sclk,
                output mosi,
                input miso,

                /*UUT control signals*/
                output rst_uut,
                input err_uut,
                input end_uut,
                /*inputs to UUT*/
                output [INPUT_SIZE_1-1:0] input_to_UUT_1,
                output [INPUT_SIZE_2-1:0] input_to_UUT_2,
                output [INPUT_SIZE_3-1:0] input_to_UUT_3,
                /*outputs from UUT*/
                input [OUTPUT_SIZE_1-1:0] output_from_UUT_1,


                input [1:0] sw_debug,
                output [31:0] debug
            );
            ``` 

            ```verilog
                control_unit #(
                    .INPUT_SIZE_1(INPUT_SIZE_1),
                    .INPUT_SIZE_2(INPUT_SIZE_2),
                    .INPUT_SIZE_3(INPUT_SIZE_3),
                    .OUTPUT_SIZE_1(OUTPUT_SIZE_1)
                )
                control_unit_isnt(
                    .clk(clk),
                    .rst(rst),
                    .start(start),
                    //sdspihost signals
                    .spi_busy(spi_busy),
                    .spi_block_addr(spi_block_addr),
                    .spi_data_out(spi_data_out),
                    .spi_r_block(spi_r_block),
                    .spi_r_byte(spi_r_byte),
                    .spi_r_multi_block(spi_r_multi_block),
                    .spi_rst(spi_rst),
                    .spi_err(spi_err),
                    .spi_data_in(spi_data_in),
                    .spi_w_block(spi_w_block),
                    .spi_w_byte(spi_w_byte),
                    //uut ctrl signals
                    .rst_uut(rst_uut),
                    .err_uut(err_uut),
                    .end_uut(end_uut),
                    //uut paramters signals
                    .input_to_UUT_1(input_to_UUT_1),
                    .input_to_UUT_2(input_to_UUT_2),
                    .input_to_UUT_3(input_to_UUT_3),
                    //uut results signals
                    .output_from_UUT_1(output_from_UUT_1),
                    //debug
                    .sw_debug(sw_debug),
                    .debug_signal(debug)
                );
            ```

    3. Modify control_unit.sv
        - add parameters and signals for all the inputs and outputs
            ```verilog
            module control_unit #(
            parameter INPUT_SIZE_1 = 32,
            parameter INPUT_SIZE_2 = 32,
            parameter INPUT_SIZE_3 = 32,
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
                //uut paramters signals
                output [INPUT_SIZE_1-1:0] input_to_UUT_1,
                output [INPUT_SIZE_2-1:0] input_to_UUT_2,
                output [INPUT_SIZE_3-1:0] input_to_UUT_3,
                //uut results signals
                input [OUTPUT_SIZE_1-1:0] output_from_UUT_1,
                //debug
                input [1:0] sw_debug,
                output [31:0] debug_signal
                );
            ```

        - Modify local parameters
            base outputs indicates the size of the test pattern. 
                1. 4 bytes of ID
                2. PRESENT block_i
                3. PRESET key
                4. PRESENT enc_dec
                5. PRESENT expected_result
            ```verilog
                localparam BASE_OUTPUTS = 32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + (INPUT_SIZE_3>>3) + (OUTPUT_SIZE_1>>3);
            ```
        - Create registers for each input X
            ```verilog
                logic [0:0] reg_din_X_cl[(INPUT_SIZE_X>>3)-1:0];
                logic [0:0] reg_din_X_w[(INPUT_SIZE_X>>3)-1:0];
                generate
                    for (i=0;i<(INPUT_SIZE_X>>3);i=i+1) begin
                        register #(.DATA_WIDTH(8)) reg_input_to_UUT_X_i(
                            .clk(clk),
                            .cl(reg_din_X_cl[i]),
                            .w(reg_din_X_w[i]),
                            .din(spi_data_out),
                            .dout(input_to_UUT_X[(i<<3)+7:(i<<3)])
                        );
                    end
                endgenerate
            ```
        - Create registers for each output X
            ```verilog
                logic [OUTPUT_SIZE_X-1:0] output_from_UUT_X_o;
                logic reg_output_from_UUT_X_o_cl;
                logic reg_output_from_UUT_X_o_w;
                register #(.DATA_WIDTH(OUTPUT_SIZE_X)) reg_output_from_UUT_X_o_0(
                    .clk(clk),
                    .cl(reg_output_from_UUT_X_o_cl),
                    .w(reg_output_from_UUT_X_o_w),
                    .din(output_from_UUT_X),
                    .dout(output_from_UUT_X_o)
                ); 
            ```
        - Add registers for expected results. 
            ```verilog
                logic [OUTPUT_SIZE_X-1:0] expected_result;
                logic [0:0] reg_expected_result_uut_cl[(OUTPUT_SIZE_X>>3)-1:0];
                logic [0:0] reg_expected_result_uut_w[(OUTPUT_SIZE_X>>3)-1:0];
                generate
                    for (i=0;i<(OUTPUT_SIZE_X>>3);i=i+1) begin
                        register #(.DATA_WIDTH(8)) reg_expected_result_i(
                            .clk(clk),
                            .cl(reg_expected_result_uut_cl[i]),
                            .w(reg_expected_result_uut_w[i]),
                            .din(spi_data_out),
                            .dout(expected_result[(i<<3)+7:(i<<3)])
                        );
                    end
                endgenerate
            ```
        - Modify the FSM
            1. Add default values for the new derivated inputs/outputs signals
            ```verilog
                always_comb begin
                    next_state = current_state;
                    
                    ...

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

                    for (j=0;j<(OUTPUT_SIZE_1>>3);j=j+1) begin
                        reg_expected_result_uut_cl[j] = 0;
                        reg_expected_result_uut_w[j] = 0;
                    end

                    reg_output_from_UUT_1_o_cl = 0;
                    reg_output_from_UUT_1_o_w = 0;
            ```
            2. Add clear signals to IDLE
            ```verilog
                IDLE:
                begin

                    ...

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
                    

                    reg_output_from_UUT_1_o_cl = 1;
                    
                    ...
                end
            ```
            3. Add write control signals to READ_DATA. Read each entry of the values named in BASE_OUTPUTS
            ```verilog
                READ_DATA:
                begin
                    rst_uut = 1;
                    spi_r_block = 1;

                    next_state = READ_BYTE;
                        case(counter_bytes_o)
                            32'h0:reg_id_w[3] = 1;
                            32'h1:reg_id_w[2] = 1;
                            32'h2:reg_id_w[1] = 1;
                            32'h3:reg_id_w[0] = 1;
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
                            32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + index_o:begin
                                reg_din_3_w[index_o] = 1'b1;
                                up_index = 1'b1;
                                if(index_o == (INPUT_SIZE_2>>3)-1) begin
                                    rst_index = 1'b1;
                                end
                            end
                            32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + (INPUT_SIZE_3>>3) + index_o:begin
                                reg_expected_result_uut_w[index_o] = 1'b1;
                                up_index = 1'b1;
                                if(index_o == (OUTPUT_SIZE_1>>3)-1) begin
                                    rst_index = 1'b1;
                                end
                            end
                            32'h200: next_state = CHECK_CUT_ID;
                            default:;
                        endcase
                end
            ```
            4. Modify WRITE_DATA to get each entry of the test pattern, equal as the previous step. In addition to the CUT value and the exec_time.
            ```verilog
                WRITE_DATA:
                begin
                    spi_w_block = 1;
                    spi_w_byte = 1;
                    reg_spi_data_w = 1;

                    
                    if(spi_busy == 1'b1) begin
                        next_state = WAIT_W_BYTE;
                    end    
                    

                    case(counter_bytes_o)
                    32'h0: reg_spi_data_in = id[31:24];
                    32'h1: reg_spi_data_in = id[23:16];
                    32'h2: reg_spi_data_in = id[15:8];
                    32'h3: reg_spi_data_in = id[7:0];
                    32'h4 + index_o : begin
                            reg_spi_data_in = input_to_UUT_1 >> (index_o * 8);
                    end
                    32'h4 + (INPUT_SIZE_1>>3) + index_o : begin
                            reg_spi_data_in = input_to_UUT_2 >> (index_o * 8);
                    end
                    32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + index_o : begin
                            reg_spi_data_in = input_to_UUT_3 >> (index_o * 8);     
                    end
                    32'h4 + (INPUT_SIZE_1>>3) + (INPUT_SIZE_2>>3) + (INPUT_SIZE_3>>3)+ index_o : begin
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
                            next_state = UPDATE_BLOCK_COUNTER;
                            rst_bytes_counter = 1;
                        end
                    default:;
                    endcase
                end
            ```
            5. Modify WAIT_W_BYTE to match WRITE_DATA
            ```verilog
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
                        else if(counter_bytes_o == 32'h4+((INPUT_SIZE_1>>3)-1)) begin
                            rst_index = 1'b1;
                        end
                        else if(counter_bytes_o == 32'h4+((INPUT_SIZE_1>>3)+(INPUT_SIZE_2>>3)-1)) begin
                            rst_index = 1'b1;
                        end
                        else if(counter_bytes_o == 32'h4+((INPUT_SIZE_1>>3)+(INPUT_SIZE_2>>3)+(INPUT_SIZE_3>>3)-1)) begin
                            rst_index = 1'b1;
                        end
                        //rst initial outputs
                        else if(counter_bytes_o == BASE_OUTPUTS - 1) begin
                            rst_index = 1'b1;
                        end
                        else if (counter_bytes_o == BASE_OUTPUTS + (OUTPUT_SIZE_1>>3) - 1) begin
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
            ```

    4. Create the top.sv with the Autotest Core and the CUT
        ```verilog
             autotest_core #(
            .INPUT_SIZE_1(64),
            .INPUT_SIZE_2(80),
            .INPUT_SIZE_3(8),
            .OUTPUT_SIZE_1(64)
            )autotest_impl(
                .clk(sys_clk_pad_i),
                .rst(rst),
                .start(start),

                .cs(cs),
                .sclk(sclk),
                .mosi(mosi),
                .miso(miso),
                

                /*UUT signals*/
                .err_uut(1'b0),
                .rst_uut(rst_uut),
                .input_to_UUT_1(block_i),
                .input_to_UUT_2(key),
                .input_to_UUT_3(enc_dec),
                .output_from_UUT_1(block_o),
                .end_uut(end_signal),

                
                
                .sw_debug(switch_i),
                .debug(debug_data)
            );

            present present_impl(
                .clk(sys_clk_pad_i),
                .rst(rst_uut),
                .enc_dec(enc_dec[0]),
                .key(key),
                .block_i(block_i),
                .end_key_generation(end_key_generation),
                .rq_data(1'b0),
                .block_o(block_o),
                .end_signal(end_signal)
            );   
        ```