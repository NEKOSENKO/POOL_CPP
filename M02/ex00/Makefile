# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 23:16:49 by mbrija            #+#    #+#              #
#    Updated: 2021/11/11 16:24:23 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=*.cpp 
FLAGS=-Wextra -Wall -Werror

NAME=Fixed

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean