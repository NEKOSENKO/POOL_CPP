/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:21:25 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 10:48:07 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
#define _FORM_HPP_

#include "Bureaucrat.hpp"


class Bureaucrat;
class Form
{
private:
   bool     is_signed;
   int      sign;
   const    std::string name;
   int      grade;

public:
    Form(/* args */);
	Form(const std::string Fname, int Fgrade);
	Form(const std::string Fname, int Fgrade, int Fsign);
	Form(const Form &p);
	Form &operator= (const Form &p);
	virtual ~Form();

	const std::string &getName() const;
	int getGrade() const;
    int getSign() const;
    bool beSigned(Bureaucrat bur);
    virtual int execute(Bureaucrat const & executor) const = 0;


	class GradeTooHighException : public std::exception

    {
        const char *what(void) const throw()
        {
            return "Grade is too High";
        }
    };

    class GradeTooLowException : public std::exception
    {
        const char *what(void) const throw()
        {
            return "Grade is too Low";
        }
    };
    
    class CantexecuteFormException : public std::exception
    {
        const char *what(void) const throw()
        {
            return "Error Execution Failed";
        }
    };

	void incrementGrade();
	void decrementGrade();
};

std::ostream &operator<< (std::ostream &os ,const Form &p);


#endif