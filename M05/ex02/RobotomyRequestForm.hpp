/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:33:59 by mbrija            #+#    #+#             */
/*   Updated: 2022/01/31 10:41:27 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;
    bool robotonomy;
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    void setRobo(bool val);
    void execute(Bureaucrat const & executor) const;
};


#endif