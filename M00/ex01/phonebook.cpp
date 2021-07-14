/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:28:22 by mbrija            #+#    #+#             */
/*   Updated: 2021/07/13 13:20:22 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main()
{
    Phonebook ph;
    std::string com;

    std::cin >> com;
    if (com.compare("EXIT") == 0)
       return 0;
    else if (com.compare("ADD") == 0)
        {
            std::cout << "Please enter contact @info : " << std::endl;
            std::cout << "First Name : ";
            std::cin >> ph.first_name;
            std::cout << std::endl;
            std::cout << "First Name : ";
            std::cin >> ph.first_name;
            std::cout << std::endl;
            std::cout << "First Name : ";
            std::cin >> ph.first_name;
            std::cout << std::endl;
            std::cout << "First Name : ";
            std::cin >> ph.first_name;
            std::cout << std::endl;
            std::cout << "First Name : ";
            std::cin >> ph.first_name;
            std::cout << std::endl;
        }
    else
        std::cout << "COMMAND NOT PHONED" << std::endl;
    return 0;
}