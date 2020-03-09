# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 16:30:38 by germancq          #+#    #+#              #
#    Updated: 2019/10/17 16:45:15 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERILOG_SOURCES = ../hdl_code/KDF_hirose_present.sv \
				  ../../../hash_functions/hirose_present/hdl_code/hirose_present_wrapper.sv \
				  ../../../hash_functions/hirose_present/hdl_code/hirose_present.sv \
				  ../../../block_ciphers/present_cipher/hdl_code/present.sv \
				  ../../../block_ciphers/present_cipher/hdl_code/present_misc.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/memory_module/hdl_code/memory_module.sv \
				  ../../../misc/counters/hdl_code/counter.sv

TOPLEVEL=KDF_hirose_present
MODULE=KDF_hirose_present_test
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim


clean_results : 
	rm *.pyc
	rm *.xml