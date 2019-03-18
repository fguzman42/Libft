NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c
RM = rm -f
SRCS = ft_*.c 
	   
OBJ = $(SRCS:%.c=%.o)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
