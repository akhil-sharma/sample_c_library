#
# Makefile
# Principles of Programming Languages
# assignment 1
#
# AKHIL SHARMA, CO15306, CSE
#

all: calc

calc: calc.c utility.c utility.h
	gcc -o calc calc.c utility.c -lm

clean:
	rm -f *.o a.out core calc