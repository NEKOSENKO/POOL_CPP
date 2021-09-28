/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:28:22 by mbrija            #+#    #+#             */
/*   Updated: 2021/09/28 15:16:02 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

bool is_number(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    if (isdigit(str[i]) == false)
      return false;
    return true;
}

int main()
{
        
        Phonebook ph;
        std::string first_name;
		std::string last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string darkest_secret;
        int i = 0;
        int nbr_contacts = 0;
        
    while (1)
    {
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
                std::cin >> first_name;
    
                std::cout << "Last Name : ";
                std::cin >> last_name;

                std::cout << "NickName : ";
                std::cin >> nickname;

                std::cout << "PhoneNumber : ";
                while (1)
                {
                    std::cin >> phone_number;
                    if (is_number(phone_number) == true)
                        break;
                    else
                    {
                        std::cout << "Phone number must conatin only numbers" << std::endl; 
                        std::cout << "PhoneNumber : ";   
                        phone_number = "";
                    }
                }

                std::cout << "Darkest Secret : ";
                std::cin >> darkest_secret;

                if (i == 7)
                    i = 0;
                ph.contact[i].add_contact(first_name, last_name, nickname,
                                phone_number, darkest_secret);
                nbr_contacts++;
                i++;
            }
        else if (com.compare("SEARCH") == 0 || com.compare("search") == 0)
            {
                std::cout << "|";
                std::cout << std::left << std::setw(10) << "Index";
                std::cout << "|";
                std::cout << std::left << std::setw(10) << "First Name";
                std::cout << "|";
                std::cout << std::left << std::setw(10) << "Last Name";
                std::cout << "|";
                std::cout << std::left << std::setw(10) << "Nickname";
                std::cout << "|" << std::endl;
                int j = 0;
                while (j < nbr_contacts)
                {
                    ph.contact[j].print_contacts(ph.contact[j], j);
                     j++;
                }
                while (1)
                {
                    int input;
                    std::cout << "Enter index of desired contacts ";
                    std::cin >> input;
                    if (input < 9 || input > 0)
                    {
                        ph.contact[input - 1].print_all_atts(ph.contact[input - 1]);
                        break;
                    }
                    else
                        std::cout << "Unvalid Index"; 
                    
                }
            }
        else
            std::cout << "COMMAND NOT FOUND\n | Valid commands : 'add , search, exit'" << std::endl;
    }

    return 0;
}