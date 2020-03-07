# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 11:45:18 by germancq          #+#    #+#              #
#    Updated: 2019/10/14 14:01:49 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERILOG_SOURCES = ../hdl_code/hirose_present_wrapper.sv \
				  ../hdl_code/hirose_present.sv \
				  ../../../block_ciphers/present_cipher/hdl_code/present.sv \
				  ../../../block_ciphers/present_cipher/hdl_code/present_misc.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/memory_module/hdl_code/memory_module.sv \
				  ../../../misc/counters/hdl_code/counter.sv	

TOPLEVEL=hirose_present_wrapper
MODULE=hirose_present_wrapper_test
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim


clean_results : 
	rm *.pyc
	rm *.xml