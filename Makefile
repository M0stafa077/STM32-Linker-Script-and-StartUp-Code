# default make target
all: link_elf
	echo "Build Succeeded"

# Build the startup code source file
startup_code:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -c startUp_code.c -o startUp_code.o

# Build the application source file
app:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -c app.c -o app.o

# Link output object files and produce elf executable file.
link_elf: app startup_code
	arm-none-eabi-ld -Map out.map -T Linker_Script.ld app.o startUp_code.o -o out.elf

# Link output object files and produce Object file
link_obj: app startup_code
	arm-none-eabi-ld -Map out.map -T Linker_Script.ld app.o startUp_code.o -o out.o

# Get the binary output.
get_binary: link_elf
	arm-none-eabi-objcopy -O binary out.elf out.bin

# Get the hex output.
get_hex: link_elf
	arm-none-eabi-objcopy -O ihex out.elf out.hex

# Clean that mess. -_-
clean: 
	rm -f *.map *.o *.elf *bin *.hex