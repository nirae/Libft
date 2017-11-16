# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 09:16:22 by ndubouil          #+#    #+#              #
#    Updated: 2017/11/16 13:49:27 by ndubouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a

SRC = ft_putchar.c		\
	  ft_putstr.c		\
	  ft_putchar_fd.c	\
	  ft_putstr_fd.c	\
	  ft_ispositive.c	\
	  ft_putnbr.c		\
	  ft_putnbr_fd.c	\
	  ft_putendl.c		\
	  ft_putendl_fd.c	\
	  ft_strclr.c		\
	  ft_striter.c		\
	  ft_striteri.c		\
	  ft_strequ.c		\
	  ft_strnequ.c		\
	  ft_memalloc.c		\
	  ft_memdel.c		\
	  ft_strnew.c		\
	  ft_strdel.c		\
	  ft_strlen.c		\
	  ft_isalpha.c		\
	  ft_isupper.c		\
	  ft_islower.c		\
	  ft_toupper.c		\
	  ft_tolower.c		\
	  ft_isdigit.c		\
	  ft_isalnum.c		\
	  ft_isascii.c		\
	  ft_isprint.c		\
	  ft_strmap.c		\
	  ft_strmapi.c		\
	  ft_strsub.c		\
	  ft_strjoin.c		\
	  ft_strtrim.c		\
	  ft_isspace.c		\
	  ft_strdup.c		\
	  ft_strcpy.c		\
	  ft_strncpy.c		\
	  ft_strcat.c		\
	  ft_strncat.c		\
	  ft_strlcat.c		\
	  ft_strchr.c		\
	  ft_strrchr.c		\
	  ft_strcmp.c		\
	  ft_strncmp.c		\

OBJ = ft_putchar.o			\
	  ft_putstr.o			\
	  ft_putchar_fd.o		\
	  ft_putstr_fd.o		\
	  ft_ispositive.o		\
	  ft_putnbr.o			\
	  ft_putnbr_fd.o		\
	  ft_putendl.o			\
	  ft_putendl_fd.o		\
	  ft_strclr.o			\
	  ft_striter.o			\
	  ft_striteri.o			\
	  ft_strequ.o			\
	  ft_strnequ.o			\
	  ft_memalloc.o			\
	  ft_memdel.o			\
	  ft_strnew.o			\
	  ft_strdel.o			\
	  ft_strlen.o			\
	  ft_isalpha.o			\
	  ft_isupper.o			\
	  ft_islower.o			\
	  ft_toupper.o			\
	  ft_tolower.o			\
	  ft_isdigit.o			\
	  ft_isalnum.o			\
	  ft_isascii.o			\
	  ft_isprint.o			\
	  ft_strmap.o			\
	  ft_strmapi.o			\
	  ft_strsub.o			\
	  ft_strjoin.o			\
	  ft_strtrim.o			\
	  ft_isspace.o			\
	  ft_strdup.o			\
	  ft_strcpy.o			\
	  ft_strncpy.o			\
	  ft_strcat.o			\
	  ft_strncat.o			\
	  ft_strlcat.o			\
	  ft_strchr.o			\
	  ft_strrchr.o			\
	  ft_strcmp.o			\
	  ft_strncmp.o			\

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
			$(CC) $(CFLAGS) $(SRC)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			/bin/rm -f $(OBJ)

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
