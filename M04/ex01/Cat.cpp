/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:16 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 17:55:46 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */):Animal("Cat")
{
     std::cout << "Cat Const Called" << std::endl;
     brain = new Brain();
     this->type = "Cat";
}

Cat::Cat(const Cat &p)
{
     std::cout << "Cat Copy Const Called" << std::endl;
     *this = p;
}

Cat::~Cat()
{
     std::cout << "Cat Deconst Called" << std::endl;
}

Cat &Cat::operator= (const Cat &p)
{
     this->type = p.type;
     return *this;
}

void Cat::makeSound() const
{
    std::cout << " This is CAT" << std::endl;
}