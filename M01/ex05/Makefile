# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:50:30 by mbrija            #+#    #+#              #
#    Updated: 2021/11/09 13:56:15 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=*.cpp 
FLAGS=-Wextra -Wall -Werror

NAME=karen

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean