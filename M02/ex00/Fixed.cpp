/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:59 by mbrija            #+#    #+#             */
/*   Updated: 2021/11/11 16:16:49 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Const called" << std::endl;
    
    this->value = 0;
}


Fixed::Fixed(const Fixed &p)
{
     std::cout << "Copy Const Called" << std::endl;
    *this = p;
}

Fixed::~Fixed()
{
     std::cout << "Destructor" << std::endl;
}

void Fixed::operator=(const Fixed &p)
{ 
    std::cout << "Assignation Op Called" << std::endl;
    this->value = p.value;
}

int Fixed::getRawBits() const
{
     std::cout << "Get Raw Bits called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
     std::cout << "Set Raw Bits called" << std::endl;
    this->value = raw;
}
