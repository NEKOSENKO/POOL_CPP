/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:03:48 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/01 17:13:50 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
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
    ~span();
};
