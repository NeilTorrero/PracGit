CC = gcc
CFLAGS = -I.
DEPS = llista.h
OBJ = main.o llista.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

mainllista: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
