CC = gcc
CFLAGS = -c
APP = calculadora
OBJ = $(APP).o 
SRC = $(APP).c
INCLUDE = ../include
LIB = ../lib
LIBNAME = operaciones

all: estatica dinamica

estatica:
		$(CC) -I$(INCLUDE) -L$(LIB) -o ../bin/$(APP)_e $(SRC) $(LIB)/lib$(LIBNAME).a -lm

dinamica:
		$(CC) -o ../bin/$(APP)_d $(SRC) -I$(INCLUDE) -L$(LIB) -l$(LIBNAME) -lm

clean:
		rm ../bin/$(APP)_e ../bin/$(APP)_d