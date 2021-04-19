CC=gcc
ARGS=-ansi -std=c99 -Wall
ZIEL=code.out
OBJECTS=codierung.o
CLEAN=rm -f
$(ZIEL): $(OBJECTS)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECTS)

codierung.o: codierung.c
	$(CC) -c $(ARGS) -o codierung.o codierung.c

clean:
	$(CLEAN) $(OBJECTS)

cleanall:
	$(CLEAN) $(OBJECTS) $(ZIEL)
