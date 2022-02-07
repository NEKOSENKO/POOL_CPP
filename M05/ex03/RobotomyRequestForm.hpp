/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:33:59 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 11:00:16 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "Form.hpp"
class Form;

class RobotomyRequestForm : public Form
{
private:
    std::string target;
    bool robotonomy;
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &p);
    RobotomyRequestForm &operator= (const RobotomyRequestForm &p);
    void setRobo(bool val);
    int execute(Bureaucrat const & executor) const;
};


#endif