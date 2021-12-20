# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 15:20:16 by mbrija            #+#    #+#              #
#    Updated: 2021/12/20 12:44:20 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS= main.cpp Animal.cpp Cat.cpp Dog.cpp
WSRC= WrongMain.cpp WrongAnimal.cpp WrongCat.cpp
FLAGS=-Wextra -Wall -Werror

NAME=Animals
WRONG=WrongAnimal

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

$(WRONG):
	clang++ $(FLAGS) $(WSRC) -o $(WRONG)

all: $(NAME) $(SRCS)

wrong: $(WRONG) $(WSRC)  

re: fclean $(NAME)

clean:
	rm -rf $(NAME) $(WRONG)

fclean: clean