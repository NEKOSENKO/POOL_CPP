/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:19:44 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/21 11:53:42 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *ani[4];
  
    for(int i=0; i<2; i++)
    {
        ani[i] = new Cat();
    }
    for(int i=2; i<4; i++)
    {
        ani[i] = new Dog();
    }
    for (int i = 0; i < 4; i++)
    {
        delete ani[i];
    }

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
}