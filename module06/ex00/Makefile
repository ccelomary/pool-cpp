# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 13:45:02 by mel-omar          #+#    #+#              #
#    Updated: 2021/06/29 14:04:27 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
SRCS = Converter.cpp main.cpp argumentValidator.cpp
OBJECTS = Converter.o main.o argumentValidator.o

all: $(NAME)

$(NAME): $(srcs)
	clang++ -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re : fclean all
