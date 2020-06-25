# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/18 17:52:22 by germancq          #+#    #+#              #
#    Updated: 2019/12/18 17:52:38 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERILOG_SOURCES = ../hdl_code/spongent_iter.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/counters/hdl_code/counter.sv


TOPLEVEL= spongent_iter
MODULE= spongent_hash_test
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim


clean_results : 
	rm *.pyc
	rm *.xml