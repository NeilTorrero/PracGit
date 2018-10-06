CC = gcc
CFLAGS = -I.
DEPS = llista.h
OBJ = main.o llista.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
