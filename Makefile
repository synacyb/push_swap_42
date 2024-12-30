CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ./libft/ft_atoi.c ./libft/ft_creat_node.c ./libft/ft_lstadd_back.c ./libft/ft_print_list.c libft/ft_swap_a.c\
			ft_printf/ft_putnbr_fd.c ft_printf/ft_putstr_fd.c ft_printf/ft_printf.c ft_printf/ft_putchar_fd.c \
			ft_printf/ft_puthxs_l.c ft_printf/ft_unsignedint.c ft_printf/ft_puthxs_u.c ft_printf/ft_putadress.c \
			main.c
# BONUS =
OBJS = $(SRCS:.c=.o)
BOBJS = $(BONUS:.c=.o)
DELETE = rm -f
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DELETE) $(OBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

.PHONY: clean
