NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLGS = ar rsc

SRCS = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_atoi.c ft_bzero.c ft_itoa.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strtrim.c ft_split.c ft_strnstr.c ft_strjoin.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c
OBJS = $(SRCS:.c=.o)
SRCS2 = ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c
OBJS2 = $(SRCS2:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(ARFLGS) $(NAME) $(OBJS)

bonus : $(OBJS2) $(OBJS)
	$(ARFLGS) $(NAME) $(OBJS2)
	@touch bonus

%.o : %.c
	$(CC) $(CFLAGS) -I . -c $<

clean :
	rm -f $(OBJS) $(OBJS2) bonus

fclean : clean
	rm -f $(NAME)

re : fclean all
