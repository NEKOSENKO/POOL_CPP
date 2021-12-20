/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:24 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 12:16:16 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(/* args */);
    Dog(const Dog &p);
    Dog &operator= (const Dog &p);
    ~Dog();
    virtual void makeSound() const;
};
