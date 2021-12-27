/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:32 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/27 15:04:14 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Name", 13);
        
        for (size_t i = 0; i < 200; i++)
            b.decrementGrade();

        std::cout << b;
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}