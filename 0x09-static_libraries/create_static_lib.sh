#!/bin/bash
gcc -c *.c -Wall -pedantic -Werror -Wextra 
 ar -rc liball.a *.o
ranlib liball.a
