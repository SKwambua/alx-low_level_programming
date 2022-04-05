#!/bin/bash
gcc -c *.c
ar cr liball.a *.o
runlib liball.a
