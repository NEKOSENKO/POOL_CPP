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
    while (1)
    {
        Phonebook ph;
        std::string com;
          std::cout << "Welcome to your old af phonebook rusty program : " << std::endl;
          std::cout << "Please insert command : ";
        std::cin >> com;
        if (com.compare("EXIT") == 0 || com.compare("exit") == 0)
            exit(0);
        else if (com.compare("ADD") == 0 || com.compare("add") == 0)
            {
                std::cout << "Please enter contact @info : " << std::endl;
                std::cout << "First Name : ";
                std::cin >> ph.first_name;
    
                std::cout << "Last Name : ";
                std::cin >> ph.last_name;

                std::cout << "NickName : ";
                std::cin >> ph.nickname;

                std::cout << "PhoneNumber : ";
                std::cin >> ph.phone_number;

                std::cout << "Darkest Secret : ";
                std::cin >> ph.darkest_secret;

                ph.add_contact(ph.first_name, ph.last_name, ph.nickname, ph.phone_number, ph.darkest_secret);
                ph.print_contacts(ph);
            }
        else
            std::cout << "COMMAND NOT FOUND" << std::endl;
    }

    return 0;
}