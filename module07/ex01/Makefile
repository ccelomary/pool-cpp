# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/02 15:53:44 by mel-omar          #+#    #+#              #
#    Updated: 2021/07/02 16:26:41 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = main.cpp 
OBJECT = main.o

all: $(NAME)
$(NAME):
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean:
	rm -f $(OBJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all