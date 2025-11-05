NAME = libft.a
SRC = ft_isalpha.c
OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	gcc -c $< -o $@

