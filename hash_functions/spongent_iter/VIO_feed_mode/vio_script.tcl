package require Tclx
set_property PARAM.FREQUENCY 30000000 [get_hw_targets localhost:3121/xilinx_tcf/Digilent/210292745836A]
set_property CORE_REFRESH_RATE_MS 0 [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
set start [clock milliseconds]
set inputFile {/home/germancq/gitProjects/IPCores/hash_functions/spongent_iter/files/VIO_inputTests_1kB_88_1000_0}
set outputFile {/home/germancq/gitProjects/IPCores/hash_functions/spongent_iter/files/VIO_output_1kB_88_1000_case3}
set fd [open $inputFile r]
set wf [open $outputFile w]
set lines [split [read $fd] "\n"]
set errors 0

reset_hw_vio_activity [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
reset_hw_vio_outputs [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

set_property OUTPUT_VALUE 1 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

while {1} {
		
    refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

    set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
    
    if {$end_uut == 0} {
        break
    }	
}

set_property OUTPUT_VALUE 0 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

set start_inst [times]
foreach line $lines {
    
    set values [split $line " "]
	set value [lindex $values 0]



    while {1} {
		
        refresh_hw_vio -update_output_values [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set busy_uut [get_property INPUT_VALUE [get_hw_probes busy_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$busy_uut == 0} {
            break
        }	
    }

    if {$value == ""} {
        break 
    }
    if {$value == "expected"} {

        


        set_property OUTPUT_VALUE 1 [get_hw_probes stop_feed_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

        commit_hw_vio [get_hw_probes {stop_feed_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]


        while {1} {
		
            refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

            set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
            
            if {$end_uut == 1} {
                break
            }	
	    }

        set_property OUTPUT_VALUE 0 [get_hw_probes stop_feed_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

        commit_hw_vio [get_hw_probes {stop_feed_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

        set output_from_UUT_1 [get_property INPUT_VALUE [get_hw_probes output_from_UUT_1 -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]

        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set expected_result [lindex $values 2]
        if {$output_from_UUT_1 != $expected_result} {
				set errors [expr $errors + 1]  		
		}
        set finish_inst [times]
        set exec_time [expr {([lindex $finish_inst 0] - [lindex $start_inst 0]) / 1.0}]
        set combined "${line} ${output_from_UUT_1} ${exec_time}"
        puts $wf $combined
        

        set_property OUTPUT_VALUE 1 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
        commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
        
        
        while {1} {
            

            set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]

            refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

            if {$end_uut == 0} {
                
                set_property OUTPUT_VALUE 0 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
            
                commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

                refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
                
                reset_hw_vio_activity [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

                break
            }
        }
        set start_inst [times]

	}
    if {$value != "expected"} {
        


        set_property OUTPUT_VALUE $value [get_hw_probes feed_data_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

        set_property OUTPUT_VALUE 1 [get_hw_probes feed_data_control_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

        commit_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set_property OUTPUT_VALUE 0 [get_hw_probes feed_data_control_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

        commit_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

    }
    


}



close $fd
close $wf

	
set end [clock milliseconds]
set total_time [expr $end - $start]
puts stdout $total_time
puts stdout $errors
