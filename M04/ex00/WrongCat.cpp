/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:28:10 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 12:50:43 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */):WrongAnimal("WrongCat")
{
     std::cout << "WrongCat Const Called" << std::endl;
     this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &p)
{
     std::cout << "WrongCat Copy Const Called" << std::endl;
     *this = p;
}

WrongCat::~WrongCat()
{
     std::cout << "WrongCat Deconst Called" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &p)
{
     this->type = p.type;
     return *this;
}

void WrongCat::makeSound() const
{
    std::cout << " This is CAT " << std::endl;
}