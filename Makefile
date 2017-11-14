# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 09:16:22 by ndubouil          #+#    #+#              #
#    Updated: 2017/11/14 12:29:48 by ndubouil         ###   ########.fr        #
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
