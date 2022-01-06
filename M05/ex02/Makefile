# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 12:57:35 by mbrija            #+#    #+#              #
#    Updated: 2022/01/06 12:27:47 by mbrija           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp /
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp
FLAGS=-Wextra -Wall -Werror

NAME=Form

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(SRCS)

re: fclean $(NAME)

clean:
	rm -rf $(NAME) $(WRONG)

fclean: clean