CC := gcc
CFLAGS := -ggdb -O3 -Wall -Wextra -pedantic -std=c11
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
NAME := f4c7or

.PHONY: all clean

all: target

target: $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(NAME) 
	rm $(OBJ)
