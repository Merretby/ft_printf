NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES =ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_unsigned.c \
	ft_printf.c 

OFILSE = $(CFILES:.c=.o)



all: $(NAME)

$(NAME): $(OFILSE)

.c.o:
	$(CC) $(CFLAGS) -c $<
	ar rc $(NAME) $@

clean:
	rm -f $(OFILSE) $(OBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
