CC = gcc
CFLAGS = -I.

mainllista: main.o llista.o
	$(CC) -o mainllista main.o llista.o
