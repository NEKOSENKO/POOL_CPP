/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:56 by mbrija            #+#    #+#             */
/*   Updated: 2021/11/11 16:11:39 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <string>
#include <iomanip>

class Fixed
{
private:
    int value;
    static const int fractionalBit;
public:
    Fixed();
    Fixed(const Fixed &p);
    ~Fixed();
    void operator= (const Fixed &p);
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif