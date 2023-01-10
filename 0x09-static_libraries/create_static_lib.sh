#!/bin/bash
gcc -c *.c -Wall -Pedantic -Werror -Wextra
ar -re liball.a *.o
ranlib liball.a
