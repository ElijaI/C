CC=gcc
ARGS=-ansi -std=c99 -Wall
ZIEL=decode.out
OBJECTS=decodierung.o
CLEAN=rm -f
$(ZIEL): $(OBJECTS)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECTS)

decodierung.o: decodierung.c
	$(CC) -c $(ARGS) -o decodierung.o decodierung.c

clean:
	$(CLEAN) $(OBJECTS)

cleanall:
	$(CLEAN) $(OBJECTS) $(ZIEL)

