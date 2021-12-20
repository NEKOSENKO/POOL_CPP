/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:21 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 17:56:01 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */): Animal("Dog")
{
     std::cout << "Dog Const Called" << std::endl;
     brain = new Brain();
     this->type = "Dog";
}

Dog::Dog(const Dog &p)
{
     std::cout << "Dog Copy Const Called" << std::endl;
     *this = p;
}

Dog::~Dog()
{
     std::cout << "Dog Deconst Called" << std::endl;
}

Dog &Dog::operator= (const Dog &p)
{
     this->type = p.type;
     return *this;
}

void Dog::makeSound() const
{
    std::cout << " This is DOG" << std::endl;
}