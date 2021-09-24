/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:09:00 by mbrija            #+#    #+#             */
/*   Updated: 2021/09/24 12:16:40 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.class.hpp"

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{
	
}
void Contact::print_contacts(Contact obj)
{
	printf("contact : \n");
	std::cout <<  obj.first_name << std::endl;
	std::cout <<  obj.last_name << std::endl;
	std::cout <<  obj.nickname << std::endl;
	std::cout <<  obj.phone_number << std::endl;
	std::cout <<  obj.darkest_secret << std::endl;
	std::cout <<  obj.id << std::endl;
}
void Contact::add_contact(std::string f_n, std::string l_n, std::string n_n,
				int phone_n, std::string d_secret)
{
		Contact::id++;  Contact::darkest_secret = d_secret;
		Contact::first_name = f_n; Contact::last_name = l_n;
		Contact::nickname = n_n;  Contact::phone_number = phone_n;
}