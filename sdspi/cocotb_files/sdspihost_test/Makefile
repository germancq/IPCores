# @Author: German Cano Quiveu <germancq>
# @Date:   2018-11-19T17:59:40+01:00
# @Email:  germancq@dte.us.es
# @Filename: Makefile
# @Last modified by:   germancq
# @Last modified time: 2018-11-19T18:03:15+01:00

VERILOG_SOURCES = ../../hdl_code/sdspihost.sv \
				  ../../hdl_code/sdcmd.sv \
				  ../../hdl_code/spi_master.sv \
				  ../../../misc/counters/hdl_code/counter.sv \
				  ../../../misc/mux/hdl_code/mux.sv \
				  ../../../misc/registers/hdl_code/register.sv 


TOPLEVEL=sdspihost
MODULE=sdspihost_test

include $(COCOTB)/makefiles/Makefile.inc
include $(COCOTB)/makefiles/Makefile.sim
