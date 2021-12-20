/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:25:03 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 12:50:59 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
    std::cout << "WrongAnimal Const Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Const Called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal &p)
{
    *this = p;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return this->type;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &p)
{
    this->type = p.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << " This is Animal" << std::endl;
}