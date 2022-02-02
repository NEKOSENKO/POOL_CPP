/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:34:02 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/02 18:00:39 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyForm", 137, 145)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGrade())
        throw GradeTooLowException();
    else 
    {
        std::ofstream o(this->target + "_shrubbery");
        o <<  "                                     .         ;      " << std::endl;        
        o <<  "        .              .              ;%     ;;       " << std::endl;            
        o <<  "          ,           ,                :;%  %;        " << std::endl;           
        o <<  "           :         ;                   :;%;'     ., " << std::endl;            
        o <<  "  ,.        %;     %;            ;        %;'    ,;   " << std::endl;         
        o <<  "    ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl;           
        o <<  "     %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl;           
        o <<  "      ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl;      
        o <<  "       `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl;              
        o <<  "        `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl;              
        o <<  "           `:%;.  :;bd%;          %;@%;'              " << std::endl;             
        o <<  "             `@%:.  :;%.         ;@@%;'               " << std::endl;             
        o <<  "               `@%.  `;@%.      ;@@%;                 " << std::endl;             
        o <<  "                 `@%%. `@%%    ;@@%;                  " << std::endl;           
        o <<  "                   ;@%. :@%%  %@@%;                   " << std::endl;        
        o <<  "                     %@bd%%%bd%%:;                    " << std::endl;           
        o <<  "                       #@%%%%%:;;                     " << std::endl;            
        o <<  "                       %@@%%%::;                      " << std::endl;          
        o <<  "                       %@@@%(o);  . '                 " << std::endl;                    
        o <<  "                       %@@@o%;:(.,'                   " << std::endl;                    
        o <<  "                   `.. %@@@o%::;                      " << std::endl;               
        o <<  "                      `)@@@o%::;                      " << std::endl;              
        o <<  "                       %@@(o)::;                      " << std::endl;                
        o <<  "                      .%@@@@%::;                      " << std::endl;                
        o <<  "                      ;%@@@@%::;.                     " << std::endl;            
        o <<  "                     ;%@@@@%%:;;;.                    " << std::endl;               
        o <<  "                 ...;%@@@@@%%:;;;;,..                 " << std::endl;
        return 1;
    }
    return 0;
}

