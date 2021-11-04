# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 12:22:11 by mbrija            #+#    #+#              #
#    Updated: 2021/10/24 12:23:23 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=*.cpp 
FLAGS=-Wextra -Wall -Werror

NAME=replace

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean