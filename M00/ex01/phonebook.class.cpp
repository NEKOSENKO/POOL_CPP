/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:26:48 by mbrija            #+#    #+#             */
/*   Updated: 2021/07/13 15:59:02 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.class.hpp"

Phonebook::Phonebook(void)
{
}

void Phonebook::add_contact(std::string f_n, std::string l_n, std::string n_n,
				int phone_n, std::string d_secret)
{
		Phonebook:id++;	
}

Phonebook::~Phonebook(void)
{
}

void Phonebook::print_contacts(Phonebook obj)
{
	printf("contact : \n");
	std::cout <<  obj.first_name << std::endl;
	std::cout <<  obj.last_name << std::endl;
	std::cout <<  obj.nickname << std::endl;
	std::cout <<  obj.phone_number << std::endl;
	std::cout <<  obj.darkest_secret << std::endl;
	std::cout <<  obj.id << std::endl;
}