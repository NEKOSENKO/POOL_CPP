/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:59 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/09 17:22:04 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}


Fixed::Fixed(const Fixed &p)
{
    *this = p;
}

Fixed::Fixed(const int num)
{
    this->value = num * (1 << Fixed::fractionalBit);
}

Fixed::Fixed(const float num)
{
    this->value = roundf(num * (1 << Fixed::fractionalBit));
}

float Fixed::toFloat( void ) const
{
     return (float)value / (1 << Fixed::fractionalBit);
}

int Fixed::toInt( void ) const
{
    return value / (1 << Fixed::fractionalBit);
}

Fixed::~Fixed()
{

}

int Fixed::getRawBits() const
{
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

// OVRELOADING OPERATORS

std::ostream& operator<<(std::ostream &os, const Fixed& floatingPoint)
{
    os << floatingPoint.toFloat();
    return os;
}

Fixed & Fixed::operator=(const Fixed &p)
{ 
    this->value = p.getRawBits();
    
    return *this;
}
Fixed Fixed::operator+ (const Fixed &p)
{
   return this->toFloat() + p.toFloat();
    
}
Fixed Fixed::operator- (const Fixed &p)
{
   return this->toFloat() - p.toFloat();
}
Fixed Fixed::operator* (const Fixed &p)
{

    return this->toFloat() * p.toFloat();
    
}
Fixed Fixed::operator/ (const Fixed &p)
{
   return this->toFloat() / p.toFloat(); 
}

Fixed Fixed::operator++()
{
    Fixed tmp;
    tmp.value = ++value;
    return tmp;
    
}
Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp.value = value++;
    return tmp;
}

Fixed Fixed::operator--()
{
    Fixed tmp;
    tmp.value = --value;
    return tmp;
    
}
Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp.value = value--;
    return tmp;
}

bool Fixed::operator< (const Fixed &p) const
{
    return this->toFloat() < p.toFloat();
}
bool Fixed::operator<= (const Fixed &p) const
{
    return this->toFloat() <= p.toFloat();
}
bool Fixed::operator> (const Fixed &p) const
{
    return this->toFloat() > p.toFloat();
}
bool Fixed::operator>= (const Fixed &p) const
{
    return this->toFloat() >= p.toFloat();
}
bool Fixed::operator== (const Fixed &p) const
{
    return this->toFloat() == p.toFloat();
}
bool Fixed::operator!= (const Fixed &p) const
{
    return this->toFloat() != p.toFloat();
}

Fixed  & Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

Fixed  & Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed const & Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

Fixed const & Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}