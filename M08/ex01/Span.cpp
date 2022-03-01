/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:03:44 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/01 17:27:05 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

span::span(unsigned int number)
{    
    count = number;
}

span::span(const span &p)
{
    *this = p;
}
span &span::operator= (const span &p)
{
    this->numbers = p.numbers;   
    return *this;
}

span::~span()
{
}

void span::addNumber(int nToAdd)
{
    if (count <= 0)
        std::cout << "Max Elements reached \n";
    else
        {
            numbers.push_back(nToAdd);
            //std::cout << "elements added : \n" << std::endl;
            count--;
        }
}
void span::print_span()
{
    std::cout << "elements are :" << std::endl;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers.at(i) << std::endl;
    }
    
}