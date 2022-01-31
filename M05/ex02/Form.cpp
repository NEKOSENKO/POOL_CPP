/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:21:14 by mbrija            #+#    #+#             */
/*   Updated: 2022/01/31 13:23:44 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(/* args */)
{
}

Form::Form(const std::string Fname, int Fgrade):name(Fname)
{
    this->is_signed = false;
	if (Fgrade < 1)
		throw GradeTooHighException();
	else if (Fgrade > 150)
		throw GradeTooLowException();
	else
		this->grade = Fgrade;
	
}

Form::Form(const std::string Fname, int Fgrade, int Fsign):name(Fname)
{
    this->is_signed = false;
	this->sign = Fsign;
	if (Fgrade < 1)
		throw GradeTooHighException();
	else if (Fgrade > 150)
		throw GradeTooLowException();
	else
		this->grade = Fgrade;
	
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
        this->is_signed = true;
		return true;
	}
    else 
        this->is_signed = false;
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

int Form::execute(Bureaucrat const & executor)
{
	
}

std::ostream & operator<< (std::ostream &os ,const Form &p)
{
	os << "Name: "  << p.getName() << std::endl;
	os << "Grade: " << p.getGrade() << std::endl;
	os << "Sign: " << p.getSign() << std::endl;
	return os;
}