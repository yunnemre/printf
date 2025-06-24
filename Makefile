CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_printf.c\
	   srcs/ft_check_persent.c \
	   srcs/ft_putstr.c \
	   srcs/ft_itoa_base.c \
	   srcs/ft_strlen.c  \
	   srcs/ft_strdup.c \
	   srcs/ft_memcpy.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re :fclean all

.PHONY: all clean fclean re
