# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 23:15:01 by mel-omar          #+#    #+#              #
#    Updated: 2021/06/02 23:24:15 by mel-omar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRCS = srcs/contact.cpp srcs/main.cpp srcs/phonebook.cpp
OBJECTS = srcs/contact.o srcs/main.o srcs/phonebook.o
FLAGS = -Wall -Wextra -Werror
all:$(NAME)
$(NAME):
	@clang++ $(FLAGS) $(SRCS) -o $(NAME)
clean:
	@rm -f $(OBJECTS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
