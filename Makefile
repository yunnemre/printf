CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_printf.c\
	   srcs/ft_check_persent.c \
	   srcs/ft_putstr.c \
	   srcs/ft_itoa_base.c \

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(NAME)

$(NAME): $(OBJS) $(LIBFT_A)
	cp $(LIBFT_A) $(NAME)
	ar rcs $(NAME) $(OBJS)


$(LIBFT_A):
	make -C $(LIBFT_DIR)

clean:
	rm -rf $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT_DIR) fclean

re : fclean all

.PHONY: all clean fclean re
