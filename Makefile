CC := gcc
CXX := g++
CFLAGS := -g -O3 -Wall -Wextra -pedantic -mwindows
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
NAME := f4c7or

.PHONY: all clean

all: target

target: $(OBJ)
	$(CC) $(CFlAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CXX) $(CFlAGS) -c $< -o $@

clean:
	rm target
	rm $(OBJ)
