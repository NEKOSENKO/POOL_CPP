/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:48:32 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/20 16:14:35 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    this->announce();
}


Zombie::~Zombie()
{
    std::cout << Zombie::get_Name();
    std::cout << "  Back The Deaaaad .." << std::endl;
}

std::string Zombie::get_Name()
{
    return Zombie::name;
}

void  Zombie::announce(void)
 {
    std::cout << Zombie::get_Name();
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
     
 }
