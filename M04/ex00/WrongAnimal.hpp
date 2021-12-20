/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:22:51 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 12:24:43 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _WRONG_ANIMAL_HPP_
#define _WRONG_ANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &p);
    WrongAnimal &operator= (const WrongAnimal &p);
    ~WrongAnimal();
    const std::string &getType() const;
    void makeSound() const;
};



#endif