# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 12:13:31 by mbrija            #+#    #+#              #
#    Updated: 2021/10/09 12:23:09 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS=*.cpp
FLAGS=-Wextra -Wall -Werror

NAME=accounts

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
