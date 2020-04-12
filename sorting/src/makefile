IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj

_DEPS = alg.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = quick_sort.o merge_sort.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

alg: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
