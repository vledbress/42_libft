NAME = libft.a
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra


all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	gcc -c $(FLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
