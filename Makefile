# Library file name
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

# Source and object files and dir
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

# Delete files
RM = rm -f

# Indicates that the following rules are not actual files
.PHONY: all clean fclean re

# Default rule to compile
all: $(NAME)

# Create a file
$(NAME): $(OBJS)
	ar rcs $@ $^

# Create .o files
%.o: %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $<

# Delete dir objs
clean:
	$(RM) $(OBJS)

# Delete .o files and libft.a
fclean: clean
	$(RM) $(NAME)

# Delete and compile everything again
re: fclean all
