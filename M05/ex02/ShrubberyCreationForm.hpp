/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:34:05 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/02 17:59:40 by mbrija           ###   ########.fr       */
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
    int execute(Bureaucrat const & executor) const;
};




#endif