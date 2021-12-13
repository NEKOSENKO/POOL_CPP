# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 13:50:51 by mbrija            #+#    #+#              #
#    Updated: 2021/12/13 13:05:04 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=ClapTrap.cpp main.cpp ScavTrap.cpp
FLAGS=-Wextra -Wall -Werror

NAME=ScavTrap

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean