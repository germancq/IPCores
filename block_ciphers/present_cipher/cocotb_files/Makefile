# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 13:59:49 by germancq          #+#    #+#              #
#    Updated: 2021/04/12 17:32:50 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERILOG_SOURCES = ../hdl_code/present.sv \
				  ../hdl_code/present_misc.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/memory_module/hdl_code/memory_module.sv \
				  ../../../misc/counters/hdl_code/counter.sv	

TOPLEVEL=present
MODULE=present_test
SIM = verilator
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim

clean_results : 
	rm *.pyc
	rm *.xml