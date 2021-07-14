# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 12:38:21 by mbrija            #+#    #+#              #
#    Updated: 2021/07/13 12:42:37 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS=phonebook.cpp phonebook.class.cpp
FLAGS=-Wextra -Wall -Werror

NAME=phonebook

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
