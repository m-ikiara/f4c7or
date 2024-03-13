CC := gcc
CXX := g++
CFlAGS := -ggdb -O3 -Wall -Werror -Wextra -pedantic
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
NAME := f4c7or

target: $(OBJ)
	$(CC) $(CFlAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CXX) $(CFlAGS) -c $< -o $@
