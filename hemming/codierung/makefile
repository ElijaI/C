CC=gcc
ARGS=-ansi -std=c99 -Wall
ZIEL=codierung.out
OBJECTS=codierung.o
SRC=codierung.c
CLEAN=rm -f
$(ZIEL): $(OBJECTS)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECTS)

$(OBJECTS): $(SRC)
	$(CC) -c $(ARGS) -o $(OBJECTS) $(SRC)

clean:
	$(CLEAN) $(OBJECTS)

cleanall:
	$(CLEAN) $(OBJECTS) $(ZIEL)

