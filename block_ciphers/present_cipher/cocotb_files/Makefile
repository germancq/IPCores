# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 13:59:49 by germancq          #+#    #+#              #
#    Updated: 2020/02/18 12:25:55 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERILOG_SOURCES = ../hdl_core/present.sv \
				  ../hdl_core/present_misc.sv \
				  ../hdl_core/register.sv \
				  ../hdl_core/memory_module.sv \
				  ../hdl_core/counter.sv	

TOPLEVEL=present
MODULE=present_test
include $(COCOTB)/makefiles/Makefile.inc
include $(COCOTB)/makefiles/Makefile.sim


clean_results : 
	rm *.pyc
	rm *.xml