/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:27:02 by mbrija            #+#    #+#             */
/*   Updated: 2021/09/25 12:33:24 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_CLASS_HPP_
# define _PHONEBOOK_CLASS_HPP_

#include <iostream>
#include <iomanip>
#include <string>

class Contact {

	private :
	
		std::string first_name;
		std::string last_name;
		std::string	nickname;
		int			phone_number;
		std::string darkest_secret;

	public :

	int nbr_contacts;
	Contact(void);
	~Contact(void);
	void	add_contact(std::string f_n, std::string l_n, std::string n_n,
							int phone_n, std::string d_secret);
	void 	print_contacts(Contact obj, int i);
	void 	print_all_atts(Contact obj);
	
	void		set_first_n(std::string fn)
	{
		first_name = fn;
	}	
		
	std::string	get_first_n(void)
	{
		return first_name;
	}

	void		set_last_n(std::string ln)
	{	
		last_name = ln;
	}
		
	std::string	get_last_n(void)
	{
		return last_name;
	}
		
	void		set_nick_n(std::string nn)
	{
		nickname = nn;
	}
	
	std::string	get_nick_n(void)
	{
		return nickname;
	}
	
	void		set_phone_n(int phn)
	{
		phone_number = phn;	
	}
	
	int	get_phone_n(void)
	{
		return phone_number;	
	}
	void		set_dark_s(std::string ds)
	{
		darkest_secret = ds;
	}
	std::string	get_dark_s(void)
	{
		return darkest_secret;
	}
	

};

class Phonebook {
	
	public :
	 
	 Contact contact;

	
		Phonebook(void);
		~Phonebook(void);
		
	

};

#endif
