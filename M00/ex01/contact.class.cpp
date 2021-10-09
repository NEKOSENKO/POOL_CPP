/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:09:00 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/09 13:05:59 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.class.hpp"

Contact::Contact(void)
{
	Contact::nbr_contacts++;
}

Contact::~Contact(void)
{
	
}
void Contact::print_contacts(Contact obj, int i)
{
                int len;

                    std::cout << "|";
                    std::cout << std::setfill(' ') << std::left << std::setw(10) << i + 1;
                    std::cout << "|";
                    len = (obj.first_name).length();
                    if (len > 10)
                    {
                        std::cout << std::setfill('.');
                        len = 9;
                    }
                    std::cout << std::left << std::setw(10) << (obj.first_name).substr(0, len);
                    std::cout << "|";
                    len = (obj.last_name).length();
                    std::cout << std::setfill(' ');
                    if (len > 10)
                    {
                        std::cout << std::setfill('.');
                        len = 9;
                    }
                    std::cout << std::left << std::setw(10) << (obj.last_name).substr(0, len);
                    std::cout << "|";
                    std::cout << std::setfill(' ');
                    len = (obj.nickname).length();
                    if (len > 10)
                    {
                        std::cout << std::setfill('.');
                        len = 9;
                    }
                    std::cout << std::left << std::setw(10) << (obj.nickname).substr(0, len);
                    std::cout << "|" << std::endl;
                return;

			// std::cout <<  obj.first_name << std::endl;
			// std::cout <<  obj.last_name << std::endl;
			// std::cout <<  obj.nickname << std::endl;
			// std::cout <<  obj.phone_number << std::endl;
			// std::cout <<  obj.darkest_secret << std::endl;
}
void Contact::print_all_atts(void)
{
    std::cout << Contact::get_first_n() << std::endl;
    std::cout << Contact::get_last_n() << std::endl;
    std::cout << Contact::get_nick_n() << std::endl;
    std::cout << Contact::get_phone_n() << std::endl;
    std::cout << Contact::get_dark_s() << std::endl;
}

void Contact::add_contact(std::string f_n, std::string l_n, std::string n_n,
				std::string phone_n, std::string d_secret)
{
		Contact::set_dark_s(d_secret);
		Contact::set_first_n(f_n); Contact::set_last_n(l_n);
		Contact::set_nick_n(n_n);  Contact::set_phone_n(phone_n);
}
