NAME = libftprintf.a
SRC = ft_printf.c \
	  ft_putchar_fd.c \
	  ft_putnbr_base.c \
	  ft_putstr_fd.c \
	  ft_strlen.c

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	@ar -crs  $@ $?

%.o : %.c
	@gcc -c $(CFLAGS) $?

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : clean fclean bonus
