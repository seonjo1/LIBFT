NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLGS = ar rcs

SRCS = ft_isalpha.c ft_bzero.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memove.c
OBJS = $(SRCS:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(ARFLGS) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
