# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 14:02:54 by germancq          #+#    #+#              #
#    Updated: 2023/10/25 18:43:07 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



VERILOG_SOURCES = ../../../packages/common_functions.sv \
				  ../../../classes/utils_functions.sv \
				  ../hdl_code/LEA.sv \
				  ../hdl_code/LEA_Key_schedule.sv \
				  ../hdl_code/LEA_enc.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/memory_module/hdl_code/memory_module.sv \
				  ../../../misc/counters/hdl_code/counter.sv \
				  ../../../misc/mux/hdl_code/mux.sv	

TOPLEVEL=LEA
MODULE=lea_test
SIM = verilator#icarus
EXTRA_ARGS += -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC

#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim

clean_results : 
	rm *.pyc
	rm *.xml