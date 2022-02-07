/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:32 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 11:10:06 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    
    {
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");

    // Bureaucrat br("Br", 20);
    // rrf->execute(br);
    
    }

    return 0;
}