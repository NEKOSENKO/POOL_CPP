/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:02:24 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/04 14:54:25 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    span a(10);
    // for (int i = 0; i < 10; i++)
    // {
    //     a.addNumber(i);
    // }
    
    a.addNumber(1);
    a.addNumber(8);
    a.addNumber(42);
    a.addNumber(2);
    a.addNumber(13);
    a.addNumber(25);
    a.addNumber(10);
    a.addNumber(11);
    a.print_span();
    a.longestSpan();
    a.shortestSpan();
    a.print_span();
    
}