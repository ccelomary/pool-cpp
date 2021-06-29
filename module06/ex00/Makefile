# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 13:45:02 by mel-omar          #+#    #+#              #
#    Updated: 2021/06/29 13:47:31 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
SRCS = Converter.cpp main.cpp
OBJECTS = Converter.o main.o

all: $(NAME)

$(NAME): $(srcs)
	clang++ -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re : fclean all
