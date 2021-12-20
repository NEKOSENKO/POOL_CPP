# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 15:20:16 by mbrija            #+#    #+#              #
#    Updated: 2021/12/20 12:07:16 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS= main.cpp Animal.cpp Cat.cpp Dog.cpp
FLAGS=-Wextra -Wall -Werror

NAME=Animals

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean