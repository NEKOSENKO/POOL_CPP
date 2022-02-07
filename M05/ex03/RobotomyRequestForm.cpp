/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:33:56 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 11:36:37 by mbrija           ###   ########.fr       */
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

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &p)
{
    *this = p;
}
RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &p)
{
    this->target = p.target;
    return *this;
}


void RobotomyRequestForm::setRobo(bool val)
{
    this->robotonomy = val;
}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGrade())
            throw CantexecuteFormException();
    else 
    {   
        srand(std::time(0));
        std::cout << "Drilling Noise" << std::endl;
        if (rand() % 2 == 1)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "the robotomy failed successfully" << std::endl;

        return 1;
    }
    return 0;
}