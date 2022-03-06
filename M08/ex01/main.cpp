/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:02:24 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/06 16:41:46 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    // span a(10);
    // // for (int i = 0; i < 10; i++)
    // // {
    // //     a.addNumber(i);
    // // }
    
    // a.addNumber(1);
    // a.addNumber(8);
    // a.addNumber(42);
    // a.addNumber(4);
    // a.addNumber(13);
    // a.addNumber(25);
    // a.addNumber(10);
    // a.addNumber(15);
    // a.print_span();
    // a.longestSpan();
    // a.shortestSpan();
    // a.print_span();

    span sp = span(20);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);

    sp.addRange(100);
    sp.print_span();
    sp.shortestSpan();
    sp.longestSpan();
    sp.addNumber(11);
    return 0;
    
}