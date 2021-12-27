/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:25 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/27 14:03:17 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::Bureaucrat(const std::string Bname, int Bgrade):name(Bname)
{
	if (Bgrade < 150 || Bgrade > 1)
		throw "";
	else
		this->grade = Bgrade;
	
}
	
Bureaucrat::Bureaucrat(const Bureaucrat &p):name(p.name)
{
	*this = p;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &p)
{
	this->grade = grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string &Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

std::ostream & operator<< (std::ostream &os ,const Bureaucrat &p)
{
	os << "Name: "  << p.getName() << std::endl;
	os << "Grade: " << p.getGrade() << std::endl;
	return os;
}