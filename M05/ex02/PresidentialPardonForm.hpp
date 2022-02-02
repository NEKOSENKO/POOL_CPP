/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:33:54 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/02 17:59:31 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "Form.hpp"
class From;

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    int execute(Bureaucrat const & executor) const;
};


#endif