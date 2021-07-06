package require Tclx
set_property PARAM.FREQUENCY 30000000 [get_hw_targets localhost:3121/xilinx_tcf/Digilent/210292745836A]
set_property CORE_REFRESH_RATE_MS 0 [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
set start [clock milliseconds]
set inputFile {/home/germancq/test_cases_VIO_generated.txt}
set outputFile {/home/germancq/VIO_1000_present_test6.txt}
set fd [open $inputFile r]
set wf [open $outputFile w]
set lines [split [read $fd] "\n"]
set errors 0
set i 0

reset_hw_vio_activity [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
 

foreach line $lines { 
	set values [split $line " "]
	set key [lindex $values 0]
	if {$key == ""} {
		break
	}
    set text [lindex $values 1]
    set enc_dec [lindex $values 2]
	set expected_result [lindex $values 3]

	set start_inst [times]

    set_property OUTPUT_VALUE 1 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    set_property OUTPUT_VALUE $text [get_hw_probes block_i -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    

    set_property OUTPUT_VALUE $enc_dec [get_hw_probes enc_dec -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    

    set_property OUTPUT_VALUE $key [get_hw_probes key -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    

    commit_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_signal [get_property INPUT_VALUE [get_hw_probes end_signal -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_signal == 0} {
            break
        }	
    }

    set_property OUTPUT_VALUE 0 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
    commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_signal [get_property INPUT_VALUE [get_hw_probes end_signal -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_signal == 1} {
            break
        }	
    }

    set block_o [get_property INPUT_VALUE [get_hw_probes block_o -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
    if {$block_o != $expected_result} {
				set errors [expr $errors + 1] 
				
	}
    set finish_inst [times]
    #time in milliseconds
    set exec_time [expr {([lindex $finish_inst 0] - [lindex $start_inst 0]) / 1.0}]
	set combined "${line} ${block_o} ${exec_time}"
	puts $wf $combined

}




close $fd
close $wf

	
set end [clock milliseconds]
set total_time [expr $end - $start]
puts stdout $total_time
puts stdout $errors

