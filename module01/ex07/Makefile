# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 23:11:19 by mel-omar          #+#    #+#              #
#    Updated: 2021/06/05 23:29:45 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
SRC = main.cpp
OBJECT = main.o 

all:$(NAME)
$(NAME):
	@clang++ -Wall -Wextra -Werror main.cpp -o $(NAME)
clean:
	@rm $(OBJECT)
fclean: clean
	@rm -f $(NAME)
re: fclean all
