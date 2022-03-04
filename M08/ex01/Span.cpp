/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:03:44 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/04 15:20:24 by mbrija           ###   ########.fr       */
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
    size_t shortest = numbers.at(1) - numbers.at(1);
    size_t shortest_check;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if ((int)i <= numbers.back() && i != numbers.size() && numbers.at(i + 1) > numbers.at(i))
            shortest_check = numbers.at(i + 1) - numbers.at(i);
        if (shortest > shortest_check)
            shortest = shortest_check;
    }
    std::cout << "shotrtest span is : " << shortest << std::endl;
    
}

void span::longestSpan()
{
    std::sort(numbers.begin(), numbers.end());
    int x = *numbers.begin();
    int y = numbers.back();
    std::cout << "Longest span is : " << y - x << std::endl;
}
