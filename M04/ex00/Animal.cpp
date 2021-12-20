/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:10 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 12:52:28 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
    std::cout << "Animal Const Called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal Const Called" << std::endl;
    this->type = type;
}

Animal::Animal(Animal &p)
{
    *this = p;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

const std::string &Animal::getType() const
{
    return this->type;
}

Animal &Animal::operator= (const Animal &p)
{
    this->type = p.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << " This is Animal " << std::endl;
}