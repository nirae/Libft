# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 09:16:22 by ndubouil          #+#    #+#              #
#    Updated: 2017/11/13 11:20:21 by ndubouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
DIR = srcs

SRC = $(DIR)/ft_putchar.c		\
	  $(DIR)/ft_putstr.c		\

HEADERS = includes
INC = -I$(HEADERS)

OBJ = ft_putchar.o				\
	  ft_putstr.o				\

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
