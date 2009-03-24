# 
# Makefile for helper code (easy hints, how-tos and common code)
#

helper-print-from-stdin: helper-print-from-stdin.o
	gcc -o helper-print-from-stdin helper-print-from-stdin.o
helper-print-from-stdin.o: helper-print-from-stdin.c
	gcc -c helper-print-from-stdin.c

all: helper-print-from-stdin

.PHONY:	clean

clean:
	-rm -f -r *.o *~ \
		helper-print-from-stdin
