# STM32-Linker-Script-and-StartUp-Code

## Overview
This repository contains essential files for initializing STM32 microcontroller projects.

## Contents
1. **LinkerScript.ld**: The linker script defines memory regions and sections for the application.

2. **startup_code.c**: The startup code for STM32F401 microcontrollers. It includes essential initialization routines like setting up the stack pointer, setting the interrupt vector table, initializing the .data and .bss sections, and calling the main function.

3. **main.c**: This C source file is where the application logic resides. 
