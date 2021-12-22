/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:21 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/22 13:31:49 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */): Animal("Dog")
{
     std::cout << "Dog Const Called" << std::endl;
     brain = new Brain();
     this->type = "Dog";
}

Dog::Dog(Dog &p)
{
     std::cout << "Dog Copy Const Called" << std::endl;
     delete brain;
     p.brain = new Brain();
     *this = p;
}

Dog::~Dog()
{
     std::cout << "Dog Deconst Called" << std::endl;
     delete brain;
}

Dog &Dog::operator= (const Dog &p)
{
     this->type = p.type;
     this->brain = p.brain;
     return *this;
}

void Dog::makeSound() const
{
    std::cout << " This is DOG" << std::endl;
}