all:	apt pico-sdk bootloader game
	@echo "\n\nEverything (bootloader + game) should now be in the $(CURDIR)/build/:"
	@ls -al $(CURDIR)/build/
	@echo "\n\n"

apt:
	sudo apt update
	sudo apt install -y git cmake xxd gcc-arm-none-eabi g++ build-essential

clean:
	rm -rf _tmp

pico-sdk:
	mkdir -p _tmp
	if [ ! -d _tmp/pico-sdk ]; then git clone https://github.com/raspberrypi/pico-sdk.git _tmp/pico-sdk; (cd _tmp/pico-sdk && git submodule update --init); fi

rom:
	@if [ ! -f rom.gb ]; then echo "\n\nCopy your ROM file (<name>.gb) into the allinone/ subfolder as 'rom.gb' first!\n\n"; /bin/false; fi
	xxd -i rom.gb rom_full.c
	cat rom_full.c  |sed -e 's/unsigned .*//' |sed -e 's/};//' >rom_array_content_only.c

game: pico-sdk rom
	(cd ../picopad-sdk/picopad-gb && cmake .)
	(cd ../picopad-sdk/picopad-gb && cmake --build .)
	cp ../picopad-sdk/build/PICOPAD-GB.PP2 build/

bootloader: pico-sdk rom
	(cd ../picopad-sdk/picopad-bootloader && cmake .)
	(cd ../picopad-sdk/picopad-bootloader && cmake --build .)
	cp ../picopad-sdk/build/pico-bootloader.uf2 build/

