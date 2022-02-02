/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:33:56 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/02 18:00:26 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 45, 72)
{
    this->target = target;
    this->robotonomy = false;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::setRobo(bool val)
{
    this->robotonomy = val;
}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGrade())
        throw GradeTooLowException();
    else 
    {
        std::cout << this->target << " Drilling Noise " << std::endl;
        std::cout << this->target << " has been robotomized successfully  " << std::endl;
        std::cout << " the robotomy failed successfully " << std::endl;
        return 1;
    }
    return 0;
}