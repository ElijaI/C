CC=gcc
ARGS=-ansi -std=c99 -Wall
ZIEL=generator.out
OBJECTS=generator.o
SRC=generator.c
CLEAN=rm -f
$(ZIEL): $(OBJECTS)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECTS)

$(OBJECTS): $(SRC)
	$(CC) -c $(ARGS) -o $(OBJECTS) $(SRC)

clean:
	$(CLEAN) $(OBJECTS)

cleanall:
	$(CLEAN) $(OBJECTS) $(ZIEL)

