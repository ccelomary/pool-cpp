# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 14:08:23 by mel-omar          #+#    #+#              #
#    Updated: 2021/06/29 19:02:16 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRCS = Serializer.cpp main.cpp
OBJECTS = Serializer.o main.o
all: $(NAME)
$(NAME):
	clang++ -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
