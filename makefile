CC = gcc
CFLAGS = -I.
DEPS =  llista.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

mainllista: main.o llista.o
	$(CC) -o mainllista main.o llista.o
