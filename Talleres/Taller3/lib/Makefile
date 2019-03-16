LIBNAME = operaciones
SRC = $(LIBNAME).c
OBJ = $(LIBNAME).o
LIB = lib$(LIBNAME)
CC = gcc
CFLAGS = -c -fPIC

all: estatica dinamica

estatica: $(OBJ)
		ar rv $(LIB).a $(OBJ)
		ranlib $(LIB).a

dinamica: $(OBJ)
		ld -o $(LIB).so $(OBJ) -shared 

.c.o:
		$(CC) $(CFLAGS) $< 

clean:
	rm $(OBJ) $(LIB).a $(LIB).so
