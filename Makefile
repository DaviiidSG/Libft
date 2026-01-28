# Library file name
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

# Source and object files and dir
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)
#OBJ_DIR = objs
#OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Delete files
RM = rm -f

# Indicates that the following rules are not actual files
.PHONY: all clean fclean re bonus

# Default rule to compile
all: $(NAME)

# Create a file
$(NAME): $(OBJS)
	ar rcs $@ $^

# Create .o files
%.o: %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $<
# Create .o files inside dir
#$(OBJ_DIR)/%.o: %.c libft.h
#	mkdir -p $(OBJ_DIR)
#	$(CC) $(CFLAGS) -o $@ -c $<

# Delete dir objs
clean:
	$(RM) $(OBJS)

# Delete .o files and libft.a
fclean: clean
	$(RM) $(NAME)

# Restart
re: fclean all

# BORRAR
bonus: all
