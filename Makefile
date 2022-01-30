ODIR=obj
SDIR=src

CFLAGS=-Wall -Wextra -Werror -g

_OBJ=main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c
	cc -c -o $@ $< $(CFLAGS)

build: $(OBJ)
	cc -o cp2p $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o core* cp2p 
