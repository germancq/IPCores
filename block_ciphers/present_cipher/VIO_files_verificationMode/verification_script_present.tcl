set_property CORE_REFRESH_RATE_MS 0 [get_hw_vios hw_vio_1]
set start [clock milliseconds]
set inputFile {/home/germancq/test_cases_VIO_generated.txt}
set outputFile {/home/germancq/test_output_cases_VIO.txt}
set fd [open $inputFile r]
set wf [open $outputFile w]
set lines [split [read $fd] "\n"]
set errors 0

reset_hw_vio_activity [get_hw_vios {hw_vio_1}]
 

foreach line $lines {
        
	set values [split $line " "]
	set key [lindex $values 0]
	if {$key == ""} {
		break
	}
    set text [lindex $values 1]
    set enc_dec [lindex $values 2]
	set expected_result [lindex $values 3]

	

	set_property OUTPUT_VALUE 1 [get_hw_probes design_1_i/vio_0_probe_out3]
	commit_hw_vio [get_hw_probes {design_1_i/vio_0_probe_out3}]
	
	set_property OUTPUT_VALUE $enc_dec [get_hw_probes design_1_i/vio_0_probe_out2]
	commit_hw_vio [get_hw_probes {design_1_i/vio_0_probe_out2}]
	set_property OUTPUT_VALUE $text  [get_hw_probes design_1_i/vio_0_probe_out0]
	commit_hw_vio [get_hw_probes {design_1_i/vio_0_probe_out0}]
	set_property OUTPUT_VALUE $key [get_hw_probes design_1_i/vio_0_probe_out1]
	commit_hw_vio [get_hw_probes {design_1_i/vio_0_probe_out1}]
	
	while {1} {
		
		refresh_hw_vio [get_hw_vios {hw_vio_1}]
		set end_signal [get_property INPUT_VALUE [get_hw_probes design_1_i/present_0_end_signal]]
		
		if {$end_signal == 0} {
			break
		}	
	}
	
	set_property OUTPUT_VALUE 0 [get_hw_probes design_1_i/vio_0_probe_out3]
	commit_hw_vio [get_hw_probes {design_1_i/vio_0_probe_out3}]

	
	while {1} {

		refresh_hw_vio [get_hw_vios {hw_vio_1}]
		set end_signal [get_property INPUT_VALUE [get_hw_probes design_1_i/present_0_end_signal]]
		
		if {$end_signal == 1} {
			
			refresh_hw_vio [get_hw_vios {hw_vio_1}]
			set block_o [get_property INPUT_VALUE [get_hw_probes design_1_i/present_0_block_o]]
			
			if {$block_o != $expected_result} {
				incr errors 
				set combined "${line} ${block_o}"
				puts $wf $combined
			}
			break
		}	
	}


}




close $fd
close $wf

	
set end [clock milliseconds]
set total_time [expr $end - $start]
puts stdout $total_time
puts stdout $errors

