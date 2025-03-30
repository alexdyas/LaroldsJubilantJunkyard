#!/usr/bin/env bash
#
# bash make script for https://github.com/LaroldsJubilantJunkyard/drawing-on-the-background-and-window
#
# Original Gameboy version
#
set -e
set -x

rm -f *.gb

# compile .c files into .o files
../../gbdk/bin/lcc -c -o main.o main.c
../../gbdk/bin/lcc -c -o LaroldsJubilantJunkyard.o LaroldsJubilantJunkyard.c

# Compile a .gb file from the compiled .o files
../../gbdk/bin/lcc -o DrawingOnTheBackgoundAndWindow.gb main.o LaroldsJubilantJunkyard.o

# Delete intermediate files created for the conmpilation process
rm -f *.asm
rm -f *.lst
rm -f *.ihx
rm -f *.sym
rm -f *.o
