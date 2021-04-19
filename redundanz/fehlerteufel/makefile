CC=gcc
ARGS=-ansi -std=c99 -Wall
ZIEL=fehler.out
OBJECTS=fehlerteufel.o
CLEAN=rm -f
$(ZIEL): $(OBJECTS)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECTS)

fehlerteufel.o: fehlerteufel.c
	$(CC) -c $(ARGS) -o fehlerteufel.o fehlerteufel.c

clean:
	$(CLEAN) $(OBJECTS)

cleanall:
	$(CLEAN) $(OBJECTS) $(ZIEL)
