NAME = libft.a
CC = gcc
INCLUDES = ./includes
FLAGS = -Wall -Wextra -Werror

# List all source files and generate object file names automatically
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c main.c
OBJ = $(SRC:.c=.o)

main: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o main

# Dependencies - add header files here
DEPS = $(wildcard $(INCLUDES)/*.h)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

# Rule to compile individual source files
%.o: srcs/%.c $(DEPS)
	$(CC) $(FLAGS) -c $< -I $(INCLUDES) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

