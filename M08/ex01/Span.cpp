/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:03:44 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/06 12:35:14 by mbrija           ###   ########.fr       */
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

void span::shortestSpan()
{
    std::sort(numbers.begin(), numbers.end());
    int span = abs(numbers[0] - numbers[1]);
    unsigned int len  = numbers.size() - 1;

    for (unsigned int i = 0; i < len; i++)
        span = std::min(span, abs(numbers[i] - numbers[i + 1]));
    std::cout << "shotrtest span is : " << span << std::endl;
    
}

void span::longestSpan()
{
    std::sort(numbers.begin(), numbers.end());
    int x = *numbers.begin();
    int y = numbers.back();
    std::cout << "Longest span is : " << y - x << std::endl;
}
