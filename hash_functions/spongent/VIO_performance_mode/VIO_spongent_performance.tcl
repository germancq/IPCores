set_property PARAM.FREQUENCY 30000000 [get_hw_targets localhost:3121/xilinx_tcf/Digilent/210292745836A]
set_property CORE_REFRESH_RATE_MS 0 [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
set start [clock milliseconds]
set inputFile {/home/germancq/test_cases_VIO_spongent88_generated.txt}
set outputFile {/home/germancq/test_output_cases_VIO_spongent88_performance.txt}
set fd [open $inputFile r]
set wf [open $outputFile w]
set lines [split [read $fd] "\n"]
set errors_100 0
set errors_200 0
set errors_400 0
set time_100 0
set time_200 0
set time_400 0

reset_hw_vio_activity [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]
reset_hw_vio_outputs [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]


foreach line $lines {
    
    set values [split $line " "]
	
	
    set text [lindex $values 0]
    if {$text == ""} {
		break
	}
	set expected_result [lindex $values 1]


    set start_interval [clock milliseconds]
    set_property OUTPUT_VALUE 1 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
    commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_uut == 0} {
            break
        }	
    }

    set_property OUTPUT_VALUE $text [get_hw_probes msg_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    commit_hw_vio [get_hw_probes {msg_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    set_property OUTPUT_VALUE 0 [get_hw_probes clk_sel -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    commit_hw_vio [get_hw_probes {clk_sel} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0]]

    set_property OUTPUT_VALUE 0 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
    commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_uut == 1} {
            break
        }	
    }

    set hash_o_uut [get_property INPUT_VALUE [get_hw_probes hash_o_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
    if {$hash_o_uut != $expected_result} {
				incr errors_400 
				set combined "${line} ${hash_o_uut}"
				puts $wf $combined
	}
    set end_interval [clock milliseconds]
    set interval [expr $end_interval - $start_interval]

    set time_400 [expr $time_400 + $interval]






    set start_interval [clock milliseconds]
    set_property OUTPUT_VALUE 1 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
    commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_uut == 0} {
            break
        }	
    }

    set_property OUTPUT_VALUE $text [get_hw_probes msg_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    commit_hw_vio [get_hw_probes {msg_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    set_property OUTPUT_VALUE 1 [get_hw_probes clk_sel -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    commit_hw_vio [get_hw_probes {clk_sel} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0]]

    set_property OUTPUT_VALUE 0 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
    commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_uut == 1} {
            break
        }	
    }

    set hash_o_uut [get_property INPUT_VALUE [get_hw_probes hash_o_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
    if {$hash_o_uut != $expected_result} {
				incr errors_200 
				set combined "${line} ${hash_o_uut}"
				puts $wf $combined
	}
    set end_interval [clock milliseconds]
    set interval [expr $end_interval - $start_interval]

    set time_200 [expr $time_200 + $interval]






    set start_interval [clock milliseconds]
    set_property OUTPUT_VALUE 1 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
    commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_uut == 0} {
            break
        }	
    }

    set_property OUTPUT_VALUE $text [get_hw_probes msg_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    commit_hw_vio [get_hw_probes {msg_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    set_property OUTPUT_VALUE 2 [get_hw_probes clk_sel -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
    commit_hw_vio [get_hw_probes {clk_sel} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0]]

    set_property OUTPUT_VALUE 0 [get_hw_probes rst_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]
        
    commit_hw_vio [get_hw_probes {rst_uut} -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]

    while {1} {
            
        refresh_hw_vio [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]

        set end_uut [get_property INPUT_VALUE [get_hw_probes end_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
        
        if {$end_uut == 1} {
            break
        }	
    }

    set hash_o_uut [get_property INPUT_VALUE [get_hw_probes hash_o_uut -of_objects [get_hw_vios -of_objects [get_hw_devices xc7a100t_0] -filter {CELL_NAME=~"vio_impl"}]]]
    if {$hash_o_uut != $expected_result} {
				incr errors_100 
				set combined "${line} ${hash_o_uut}"
				puts $wf $combined
	}
    set end_interval [clock milliseconds]
    set interval [expr $end_interval - $start_interval]

    set time_100 [expr $time_100 + $interval]



}



close $fd
close $wf

	
set end [clock milliseconds]
set total_time [expr $end - $start]
puts stdout $total_time
puts stdout $time_100
puts stdout $errors_100
puts stdout $time_200
puts stdout $errors_200
puts stdout $time_400
puts stdout $errors_400