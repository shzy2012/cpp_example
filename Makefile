CC=gcc
CFLAGS=-Wall

hello:hello.o hello_fn.o
clean:
	rm -f hello hello.o hello_fn.o
