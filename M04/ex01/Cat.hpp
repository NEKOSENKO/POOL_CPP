/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:27:19 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/21 16:11:32 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat(/* args */);
    Cat(Cat &p);
    virtual ~Cat();
    Cat &operator= (const Cat &p);
    virtual void makeSound() const;
    Brain *getBrain();
    void setBrain(Brain *brain);
};

