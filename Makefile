all: link_elf
	echo "Build Succeeded"
startup_code:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -c startUp_code.c -o startUp_code.o

app:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -c app.c -o app.o

link_elf: app startup_code
	arm-none-eabi-ld -Map out.map -T Linker_Script.ld app.o startUp_code.o -o out.elf

link_obj: app startup_code
	arm-none-eabi-ld -Map out.map -T Linker_Script.ld app.o startUp_code.o -o out.o

get_binary: link_elf
	arm-none-eabi-objcopy -O binary out.elf out.bin

get_hex: link_elf
	arm-none-eabi-objcopy -O ihex out.elf out.hex

clean: 
	rm -f *.map *.o *.elf *bin *.hex