/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:04:53 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/03 18:12:51 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTRN_HPP_
#define INTRN_HPP_

#include "Bureaucrat.hpp"

class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    ~Intern();
    Form *makeForm(std::string FormName, std::string Target);
};



#endif