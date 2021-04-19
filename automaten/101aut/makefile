CC=gcc
ARGS=-ansi -std=c99 -Wall
ZIEL=automat
OBJECTS=automat.o
CLEAN=rm -f
$(ZIEL): $(OBJECTS)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECTS)

automat.o: automat.c
	$(CC) -c $(ARGS) -o automat.o automat.c

clean:
	$(CLEAN) $(OBJECTS)

cleanall:
	$(CLEAN) $(OBJECTS) $(ZIEL)
