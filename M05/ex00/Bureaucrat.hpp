/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:29 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/27 15:05:21 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(const std::string Bname, int Bgrade);
	Bureaucrat(const Bureaucrat &p);
	Bureaucrat &operator= (const Bureaucrat &p);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;

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

	void incrementGrade();
	void decrementGrade();
};

std::ostream &operator<< (std::ostream &os ,const Bureaucrat &p);

#endif
