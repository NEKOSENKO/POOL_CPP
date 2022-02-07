/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:04:53 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 10:50:09 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTRN_HPP_
#define INTRN_HPP_

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern(/* args */);
    ~Intern();
    Form *makeForm(std::string FormName, std::string Target);   
}; 


#endif