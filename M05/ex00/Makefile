# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 12:57:35 by mbrija            #+#    #+#              #
#    Updated: 2021/12/27 13:01:49 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= main.cpp Bureaucrat.cpp
FLAGS=-Wextra -Wall -Werror

NAME=Bureaucrat

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME) $(WRONG)

fclean: clean