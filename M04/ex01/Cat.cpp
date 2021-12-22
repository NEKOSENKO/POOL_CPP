/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:16 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/22 13:32:00 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */):Animal("Cat")
{
     std::cout << "Cat Const Called" << std::endl;
     brain = new Brain();
     this->type = "Cat";
}

Cat::Cat(Cat &p)
{
     std::cout << "Cat Copy Const Called" << std::endl;
     delete brain;
     p.brain = new Brain();
     *this = p;
}

Cat::~Cat()
{
     std::cout << "Cat Deconst Called" << std::endl;
     delete brain;
}

Cat &Cat::operator= (const Cat &p)
{
     this->brain = p.brain;
     this->type = p.type;
     return *this;
}

void Cat::makeSound() const
{
    std::cout << " This is CAT" << std::endl;
}

Brain *Cat::getBrain()
{
     return this->brain;
}
void Cat::setBrain(Brain *brain)
{
     this->brain = brain;
}