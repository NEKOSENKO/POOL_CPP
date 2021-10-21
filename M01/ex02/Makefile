# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 12:48:22 by mbrija            #+#    #+#              #
#    Updated: 2021/10/21 12:49:21 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=*.cpp 
FLAGS=-Wextra -Wall -Werror

NAME=ref

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean