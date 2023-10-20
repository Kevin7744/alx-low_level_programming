#!/bin/bash
gcc -shared -o libjackpot.so -fPIC jackpot.c
LD_PRELOAD=./libjackpot.so ./gm 9 8 10 24 75 9
