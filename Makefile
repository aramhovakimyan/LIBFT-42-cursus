NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(shell find . -name "*.c" ! -name "ft_lst*.c")
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = $(shell find . -name "ft_lst*.c")
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean bonus re all