#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
ar rc libmy.a *.o
