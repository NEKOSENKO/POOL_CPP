# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 12:13:31 by mbrija            #+#    #+#              #
#    Updated: 2021/09/30 12:13:39 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS=*.cpp *.hpp
FLAGS=-Wextra -Wall -Werror

NAME=phonebook

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
