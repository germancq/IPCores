# IPCores

COCOTB with python3

Follow README inside coctb_files

FUSESOC

build project with fusesoc : fusesoc --cores-root ~/gitProjects/IPCores/ build --target=synth present_system
se creara una carpeta build desde donde se lanzo el comando.

SI apareciese el error : INFO: Preparing ::present_cipher:0
                         ERROR: Setup failed : Cannot find block_ciphers/present_cipher/hdl_code/present.sv in :
	                     /home/germancq/.cache/fusesoc/present_cipher_0

                         Borrar la cache para que se la descargue de nuevo de github:
                         rm -r /home/germancq/.cache/fusesoc/present_cipher_0