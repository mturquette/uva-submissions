# 
# Makefile for helper code (easy hints, how-tos and common code)
#

all: print-from-stdin.out \
	print-from-cmdline.out \
	threads-a-b.out

print-from-stdin.out: print-from-stdin.o
	gcc -o print-from-stdin.out print-from-stdin.o
print-from-stdin.o: print-from-stdin.c
	gcc -c print-from-stdin.c

print-from-cmdline.out: print-from-cmdline.o
	gcc -o print-from-cmdline.out print-from-cmdline.o
print-from-cmdline.o: print-from-cmdline.c
	gcc -c print-from-cmdline.c

threads-a-b.out: threads-a-b.o
	gcc -lpthread -o threads-a-b.out threads-a-b.o
threads-a-b.o: threads-a-b.c
	gcc -c threads-a-b.c

.PHONY:	clean

clean:
	-rm -f -r *.o *~ *.out
