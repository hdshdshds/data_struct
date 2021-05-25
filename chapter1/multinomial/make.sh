#!/usr/bin
name=$1
gcc $name.c -lm -o $name.o
./$name.o

