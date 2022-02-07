/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:33:51 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 11:06:58 by mbrija           ###   ########.fr       */
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
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p)
{
    *this = p;
}
PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &p)
{
    this->target = p.target;
    return *this;
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
