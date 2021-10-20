/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:48:32 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/18 14:20:10 by mbrija           ###   ########.fr       */
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
// void        Zombie::set_Name(std::string name)
// {
//     Zombie::name = name;
// }
void  Zombie::announce(void)
 {
    std::cout << Zombie::get_Name();
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
     
 }
