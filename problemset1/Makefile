# 
# Makefile for Problem Set Volume I
#

100-the-3n+1-problem.out: 100-the-3n+1-problem.o
	gcc -o 100-the-3n+1-problem.out 100-the-3n+1-problem.o
100-the-3n+1-problem.o: 100-the-3n+1-problem.c
	gcc -c 100-the-3n+1-problem.c

all: 100-the-3n+1-problem.out

.PHONY:	clean

clean:
	-rm -f -r *.o *~ *.out
