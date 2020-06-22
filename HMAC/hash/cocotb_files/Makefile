#
# @ Author: German Cano Quiveu, germancq@dte.us.es
# @ Create Time: 2020-06-22 22:13:02
# @ Modified by: Your name
# @ Modified time: 2020-06-22 22:13:14
# @ Description:
#

VERILOG_SOURCES = ../hdl_code/hmac_spongent.sv \
				  ../../../hash_functions/spongent/hdl_code/spongent.sv \
				  ../../../misc/registers/hdl_code/register.sv \
				  ../../../misc/counters/hdl_code/counter.sv


TOPLEVEL= hmac_spongent
MODULE= hmac_spongent_test
#include $(COCOTB)/makefiles/Makefile.inc
#include $(COCOTB)/makefiles/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.inc
include $(shell cocotb-config --makefiles)/Makefile.sim


clean_results : 
	rm *.pyc
	rm *.xml
