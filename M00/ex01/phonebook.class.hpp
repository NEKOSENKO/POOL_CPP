/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:27:02 by mbrija            #+#    #+#             */
/*   Updated: 2021/07/13 18:30:11 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_CLASS_HPP_
# define _PHONEBOOK_CLASS_HPP_

#include <iostream>
#include <iomanip>
#include <string>

class Phonebook {
	
	public :
	 
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	int			phone_number;
	std::string darkest_secret;
	
		Phonebook(void);
		~Phonebook(void);
		void	add_contact(std::string f_n, std::string l_n, std::string n_n,
							int phone_n, std::string d_secret);

};

#endif
