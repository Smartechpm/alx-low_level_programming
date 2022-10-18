#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c std=gnu89 *.c
ar -rcs liball.a *.o
nm liball.a

