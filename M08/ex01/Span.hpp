/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:03:48 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/06 16:33:31 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>

class span
{
private:
    std::vector<int> numbers;
    int count;
public:
    span(unsigned int number);
    span(const span &p);
    span &operator= (const span &p);
    void addNumber(int nToAdd);
    void print_span();
    void shortestSpan();
    void longestSpan();
    void addRange(int range);
    ~span();
};
// std::ostream& operator<<(std::ostream &os, const span &sp);