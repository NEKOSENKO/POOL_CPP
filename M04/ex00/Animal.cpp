/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:10 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/19 15:46:34 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
    std::cout << "Animal Const Called" << std::endl;
}

Animal::Animal(Animal &p)
{
    *this = p;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}
