SDIR=source
ODIR=object
INC=./include
OBJE=object
EXE=exec
CC=gcc
CFLAGS= -I $(INC) -Wall

DEPS=header.h
_DEPS=$(patsubst %, $(INC)/%, $(INC))

OBJ=input.o stack.o main.o validate.o 
_OBJ=$(patsubst %, $(OBJE)/%,$(OBJ))

$(ODIR)/%.o:$(SDIR)/%.c
	$(CC) -c -g -o $@ $< $(CFLAGS)

output:$(_OBJ)
	$(CC) -o $@ $^
