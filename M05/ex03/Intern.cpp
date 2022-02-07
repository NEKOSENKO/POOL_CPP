/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:04:56 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 10:50:26 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string FormName, std::string Target)
{
      std::string requests[3] = {"Robotomy Request", "Shrubbery Creation", "Presidential Pardon"};
      
      Form *form[3] = {
        new ShrubberyCreationForm(Target),
        new RobotomyRequestForm(Target),
        new PresidentialPardonForm(Target)
        
        };
      int j = -1;
      
      for (int i = 0; i < 3; i++)
          {
            if (FormName == requests[i])
              j = i;
            else
              delete form[i];
          }
      if (j == -1)
        {
          std::cout << "Creation Failed " << std::endl;
          return NULL;
        }
      std::cout << "Intern creates " << FormName << std::endl;
      return form[j];
    
}
