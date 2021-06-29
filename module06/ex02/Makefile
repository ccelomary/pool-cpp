# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 19:10:49 by mel-omar          #+#    #+#              #
#    Updated: 2021/06/29 19:47:02 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRCS = dynamic.cpp main.cpp
OBJECTS = dynamic.o main.o
all: $(NAME)
$(NAME):
	clang++ -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all