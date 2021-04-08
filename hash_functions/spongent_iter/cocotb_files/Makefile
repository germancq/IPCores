# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/18 17:52:22 by germancq          #+#    #+#              #
#    Updated: 2021/04/08 14:05:04 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERILOG_SOURCES = ../hdl_code/spongent_iter.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/counters/hdl_code/counter.sv


TOPLEVEL= spongent_iter
MODULE= spongent_hash_test
SIM = verilator
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim


#COMPILE_ARGS += -GN=88 -Gc=80 -Gr=8 -GR=45 -GlCounter_initial_state=0x05 -GlCounter_feedback_coeff=0x61
#COMPILE_ARGS += -GN=128 -Gc=128 -Gr=8 -GR=70 -GlCounter_initial_state=0x7A -GlCounter_feedback_coeff=0xC1
#COMPILE_ARGS += -GN=160 -Gc=160 -Gr=16 -GR=90 -GlCounter_initial_state=0x45 -GlCounter_feedback_coeff=0xC1
#COMPILE_ARGS += -GN=224 -Gc=224 -Gr=16 -GR=120 -GlCounter_initial_state=0x01 -GlCounter_feedback_coeff=0xC1
COMPILE_ARGS += -GN=256 -Gc=256 -Gr=16 -GR=140 -GlCounter_initial_state=0x9E -GlCounter_feedback_coeff=0x11D

clean_results : 
	rm *.pyc
	rm *.xml