/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:32 by mbrija            #+#    #+#             */
/*   Updated: 2022/01/04 18:27:43 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("Name", 0);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Form f("Form", 20);
        Bureaucrat br("Br", 20);

        br.signForm(f);
        
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}