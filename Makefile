# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Output binary
NAME = libftprintf.a

# Source and object files
SRCS = printf.c tests.c \
       lib/ft_putchar.c lib/ft_unsig_nbr.c lib/ft_puthex.c lib/ft_putnbr.c lib/ft_putstr.c lib/ft_put_upper_hex.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

# Rule to build the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: lib/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS)

# Full clean, including the output binary
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re

