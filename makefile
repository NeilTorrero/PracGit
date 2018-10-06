CC = gcc
CFLAGS = -I.
DEPS =  llista.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

mainllista: llista.o main.o
	$(CC) -o mainllista llista.o main.o
