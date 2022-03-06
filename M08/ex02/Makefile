# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 16:43:09 by mbrija            #+#    #+#              #
#    Updated: 2022/03/06 16:44:41 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= main.cpp \

FLAGS=-Wextra -Wall -Werror -std=c++98 

NAME=stack

$(NAME):
	c++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME) $(WRONG)

fclean: clean