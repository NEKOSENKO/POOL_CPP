# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/08 13:16:18 by mbrija            #+#    #+#              #
#    Updated: 2021/07/11 16:28:21 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=megaphone.cpp
FLAGS=-Wextra -Wall -Werror

NAME=megaphone

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
