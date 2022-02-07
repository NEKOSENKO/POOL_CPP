/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:34:05 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 11:01:27 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include "Form.hpp"
class Form;

class ShrubberyCreationForm : public Form
{
private:
   std::string target;
public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &p);
    ShrubberyCreationForm &operator= (const ShrubberyCreationForm &p);
    int execute(Bureaucrat const & executor) const;
};




#endif