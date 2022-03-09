/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:03:44 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/09 10:40:21 by mbrija           ###   ########.fr       */
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
    int shortest = abs(numbers[0] - numbers[1]);
    size_t len  = numbers.size() - 1;

    for (size_t i = 0; i < len; i++)
        shortest = std::min(shortest, abs(numbers[i] - numbers[i + 1]));
    std::cout << "shotrtest span is : " << shortest << std::endl;
    
}

void span::longestSpan()
{
    std::sort(numbers.begin(), numbers.end());
    int x = *numbers.begin();
    int y = numbers.back();
    std::cout << "Longest span is : " << y - x << std::endl;
}

void span::addRange(int range)
{
    srand(time(0));

    for (int i = 0; i < count ; i++)
    {
        numbers.push_back(1 + (rand() % range));
    }
    count = 0;
    
}