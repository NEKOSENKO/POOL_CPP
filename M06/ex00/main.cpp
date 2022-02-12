/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:03:26 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/12 18:14:45 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int  main (int ac, char **av)
{
    std::string input;
    char c;
    int i;
    float f;
    double d;
    
    if (ac == 2)
    {
        input = av[1];
         
        if (input == "nan")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
            return 0 ;
        }

        f = std::stof(input);
        i = std::stoi(input);
        d = std::stod(input);
        c = i;

        if (i >= 33 && i <= 124)
            std::cout << "char : " << c << std::endl;
        else
             std::cout << "char : Non displayable" << std::endl;
        std::cout << "int : " << i << std::endl;
        if (f == i)
            std::cout << "float : "  << f << ".0f" << std::endl;
         else   
            std::cout << "float : "  << f << "f" << std::endl;
        if (f == i)
            std::cout << "double : "  << f << ".0" << std::endl;
         else  
            std::cout << "double : " << d << std::endl;
    }
    else
        std::cout << "Bad parameters" << std::endl;

    return 0;
}