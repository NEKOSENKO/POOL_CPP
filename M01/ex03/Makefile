# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 14:19:49 by mbrija            #+#    #+#              #
#    Updated: 2021/10/21 14:54:59 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=*.cpp 
FLAGS=-Wextra -Wall -Werror

NAME=violence

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
