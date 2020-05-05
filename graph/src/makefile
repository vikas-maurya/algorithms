IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=../obj

_DEPS = graph.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = graph.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

graph: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
