# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/31 13:18:32 by mel-omar          #+#    #+#              #
#    Updated: 2021/06/02 18:55:22 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
OBJECT = megaphone.o

all: $(NAME)
$(NAME):
	@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean:
	@rm -f $(OBJECT)
fclean: clean
	@rm $(NAME)
re: fclean all'
