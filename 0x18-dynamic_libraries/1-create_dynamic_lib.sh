#!/bin/bash
gcc -fPIC *.c -o liball.o
gcc -shared -o liball.so liball.o
