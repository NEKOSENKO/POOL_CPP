/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:33:51 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/03 15:40:37 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5, 25)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGrade())
        throw CantexecuteFormException();
    else 
    {
        std::cout << this->target << "  has been pardoned by Zafod Beeblebrox. " << std::endl;
        return 1;
    }
    return 0;
}