/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:35:12 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/21 15:25:04 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon & wp)
{
    this->Weap = &wp;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << Weap->getType() << std::endl;
}
