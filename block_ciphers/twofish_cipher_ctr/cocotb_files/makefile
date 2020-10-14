# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 12:19:02 by germancq          #+#    #+#              #
#    Updated: 2020/10/14 15:53:10 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERILOG_SOURCES = ../hdl_code/twofish_ctr.sv \
				  ../../../misc/galois_arithmetic/hdl_code/galois_arithmetic.sv \
				  ../../../misc/adder/hdl_code/adder.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/counters/hdl_code/counter.sv

TOPLEVEL= twofish_ctr
MODULE=twofish_ctr_test
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim


clean_results : 
	rm *.pyc
	rm *.xml