# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 13:22:40 by mbrija            #+#    #+#              #
#    Updated: 2022/02/22 14:37:13 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= main.cpp \

FLAGS=-Wextra -Wall -Werror -std=c++98

NAME=array

$(NAME):
	c++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME) $(WRONG)

fclean: clean