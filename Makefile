#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 17:03:16 by okogut            #+#    #+#              #
#    Updated: 2018/10/23 17:03:32 by okogut           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = *.c
OBJ = $(SRC:.c=.o)
DEL = rm -f
FLAG = -Wall -Wextra -Werror
TRSH = *~

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC) -I .
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(DEL) $(OBJ)

cashdel:
	$(DEL) $(TRSH)

fclean: clean
	$(DEL) $(NAME)

re: fclean all