/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:56 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/09 17:22:15 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fractionalBit = 8;
public:
    Fixed();
    Fixed(const Fixed &p);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed & operator= (const Fixed &p);
    Fixed operator+ (const Fixed &p);
    Fixed operator- (const Fixed &p);
    Fixed operator* (const Fixed &p);
    Fixed operator/ (const Fixed &p);

    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);

    bool operator< (const Fixed &p) const;
    bool operator<= (const Fixed &p) const;
    bool operator> (const Fixed &p) const;
    bool operator>= (const Fixed &p) const;
    bool operator== (const Fixed &p) const;
    bool operator!= (const Fixed &p) const;

    
    int getRawBits() const;
    void setRawBits(int const raw);
    static Fixed &max(Fixed &a, Fixed &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &os, const Fixed& floatingPoint);

#endif