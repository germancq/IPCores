
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-07-09 22:00:58
 # @ Modified by: Your name
 # @ Modified time: 2020-07-09 22:01:03
 # @ Description:
 

VERILOG_SOURCES = ../hdl_code/hmac_spongent_iter.sv \
				  ../../../hash_functions/spongent_iter/hdl_code/spongent_iter.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/counters/hdl_code/counter.sv


TOPLEVEL= hmac_spongent_iter
MODULE= hmac_spongent_hash_test
SIM = verilator
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim


clean_results : 
	rm *.pyc
	rm *.xml