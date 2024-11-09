# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 18:22:24 by btuncer           #+#    #+#              #
#    Updated: 2024/11/02 20:23:13 by btuncer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = ft_*.c

all: $(NAME)

$(NAME):
		cc $(FLAG) -c $(SRC)
		ar rcs $(NAME) *.o

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all
