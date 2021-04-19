CC=gcc
ARGS=-ansi -std=c99 -Wall
ZIEL=gen.out
OBJECTS=generator.o
CLEAN=rm -f
$(ZIEL): $(OBJECTS)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECTS)

generator.o: generator.c
	$(CC) -c $(ARGS) -o generator.o generator.c

clean:
	$(CLEAN) $(OBJECTS)

cleanall:
	$(CLEAN) $(OBJECTS) $(ZIEL)
