/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:13 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 19:29:23 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <iostream>
#include <string>
#include <iomanip>

class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    Animal(std::string type);
    Animal(Animal &p);
    Animal &operator= (const Animal &p);
    virtual ~Animal();
    const std::string &getType() const;
    virtual void makeSound() const = 0;
};


#endif