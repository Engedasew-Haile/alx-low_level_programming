#!/bin/bash
gcc -c *.c -Wall -Pedantic -Werror -Wextra
ar -rc liball.a *.o
ranlib liball.a
