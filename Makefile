# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 09:16:22 by ndubouil          #+#    #+#              #
#    Updated: 2017/11/15 10:03:37 by ndubouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
DIR = srcs

SRC = $(DIR)/ft_putchar.c		\
	  $(DIR)/ft_putstr.c		\
	  $(DIR)/ft_putchar_fd.c	\
	  $(DIR)/ft_putstr_fd.c		\
	  $(DIR)/ft_ispositive.c	\
	  $(DIR)/ft_putnbr.c		\
	  $(DIR)/ft_putnbr_fd.c		\
	  $(DIR)/ft_putendl.c		\
	  $(DIR)/ft_putendl_fd.c	\
	  $(DIR)/ft_strclr.c		\
	  $(DIR)/ft_striter.c		\
	  $(DIR)/ft_striteri.c		\
	  $(DIR)/ft_strequ.c		\
	  $(DIR)/ft_strnequ.c		\
	  $(DIR)/ft_memalloc.c		\
	  $(DIR)/ft_memdel.c		\
	  $(DIR)/ft_strnew.c		\
	  $(DIR)/ft_strdel.c		\
	  $(DIR)/ft_strlen.c		\
	  $(DIR)/ft_isalpha.c		\
	  $(DIR)/ft_isupper.c		\
	  $(DIR)/ft_islower.c		\
	  $(DIR)/ft_toupper.c		\
	  $(DIR)/ft_tolower.c		\
	  $(DIR)/ft_isdigit.c		\
	  $(DIR)/ft_isalnum.c		\
	  $(DIR)/ft_isascii.c		\
	  $(DIR)/ft_isprint.c		\
	  $(DIR)/ft_strmap.c		\
	  $(DIR)/ft_strmapi.c		\
	  $(DIR)/ft_strsub.c		\
	  $(DIR)/ft_strjoin.c		\
	  $(DIR)/ft_strtrim.c		\
	  $(DIR)/ft_isblank.c		\

HEADERS = includes
INC = -I$(HEADERS)

OBJ = ft_putchar.o				\
	  ft_putstr.o				\
	  ft_putchar_fd.o			\
	  ft_putstr_fd.o			\
	  ft_ispositive.o			\
	  ft_putnbr.o				\
	  ft_putnbr_fd.o			\
	  ft_putendl.o				\
	  ft_putendl_fd.o			\
	  ft_strclr.o				\
	  ft_striter.o				\
	  ft_striteri.o				\
	  ft_strequ.o				\
	  ft_strnequ.o				\
	  ft_memalloc.o				\
	  ft_memdel.o				\
	  ft_strnew.o				\
	  ft_strdel.o				\
	  ft_strlen.o				\
	  ft_isalpha.o				\
	  ft_isupper.o				\
	  ft_islower.o				\
	  ft_toupper.o				\
	  ft_tolower.o				\
	  ft_isdigit.o				\
	  ft_isalnum.o				\
	  ft_isascii.o				\
	  ft_isprint.o				\
	  ft_strmap.o				\
	  ft_strmapi.o				\
	  ft_strsub.o				\
	  ft_strjoin.o				\
	  ft_strtrim.o				\
	  ft_isblank.o				\

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
			$(CC) $(CFLAGS) $(SRC) $(INC)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			/bin/rm -f $(OBJ)

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
