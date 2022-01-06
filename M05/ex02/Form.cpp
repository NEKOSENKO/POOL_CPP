/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:21:14 by mbrija            #+#    #+#             */
/*   Updated: 2022/01/04 16:26:23 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(/* args */)
{
}

Form::Form(const std::string Bname, int Bgrade):name(Bname)
{
    this->sign = false;
	if (Bgrade < 1)
		throw GradeTooHighException();
	else if (Bgrade > 150)
		throw GradeTooLowException();
	else
		this->grade = Bgrade;
	
}
	
Form::Form(const Form &p):name(p.name)
{
	*this = p;
}

Form &Form::operator= (const Form &p)
{
	this->grade = p.grade;
	return *this;
}

Form::~Form()
{
}

const std::string &Form::getName() const
{
	return this->name;
}

int Form::getGrade() const
{
	return this->grade;
}

int Form::getSign() const
{
	return this->sign;
}

bool Form::beSigned(Bureaucrat bur)
{
    if (bur.getGrade() <= this->grade)
	{
        this->sign = true;
		return true;
	}
    else 
        this->sign = false;
	return false;
}

void Form::incrementGrade()
{
	if (this->grade == 1)
		throw GradeTooLowException();
	else
		this->grade--;
}

void Form::decrementGrade()
{
	if (this->grade == 150)
		throw GradeTooHighException();
	else
		this->grade++;
}


std::ostream & operator<< (std::ostream &os ,const Form &p)
{
	os << "Name: "  << p.getName() << std::endl;
	os << "Grade: " << p.getGrade() << std::endl;
	os << "Sign: " << p.getSign() << std::endl;
	return os;
}