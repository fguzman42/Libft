# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fguzman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/19 15:43:44 by fguzman           #+#    #+#              #
#    Updated: 2019/03/19 17:45:02 by fguzman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC = ./

FLAGS = -Wall -Wextra -Werror

LIBC = 	ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_atoi.c ft_strclr.c ft_bzero.c ft_strcmp.c ft_isalnum.c \
		ft_strcpy.c ft_isalpha.c ft_strdel.c ft_isascii.c ft_strdup.c ft_isdigit.c ft_strequ.c ft_isprint.c \
		ft_striter.c ft_itoa.c ft_striteri.c ft_lstadd.c ft_strjoin.c ft_lstdel.c ft_strlcat.c ft_lstdelone.c \
		ft_strlen.c	ft_lstiter.c ft_strmap.c ft_lstmap.c ft_strmapi.c ft_lstnew.c ft_strncat.c ft_memalloc.c \
		ft_strncmp.c ft_memccpy.c ft_strncpy.c ft_memchr.c ft_strnequ.c ft_memcmp.c	ft_strnew.c ft_memcpy.c	\
		ft_strnstr.c ft_memdel.c ft_strrchr.c ft_memmove.c ft_strsplit.c ft_memset.c ft_strstr.c ft_putchar.c \
		ft_strsub.c ft_putchar_fd.c	ft_strtrim.c ft_putendl.c ft_tolower.c ft_putendl_fd.c ft_toupper.c \
		ft_putnbr.c	ft_wordcount.c ft_putnbr_fd.c ft_putstr.c

OBJ = ft_*.o


all: $(NAME)

$(NAME):
		gcc -c $(FLAGS) -I$(INC) $(LIBC) $(ADDITIONAL) $(LISTS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean: 
		rm -f $(OBJ)
		
fclean: clean
		rm -f $(NAME)

re: fclean all
