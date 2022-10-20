SRCS = ft_printf.c ft_putnb.c ft_puttstr.c \
		ft_putchar.c ft_puthex.c ft_putptr.c

NAME = "libftprintf.a"

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all