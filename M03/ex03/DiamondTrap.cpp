/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:17:31 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 14:51:02 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default Const Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    std::cout << "DiamondTrap Name Const Called" << std::endl;
    ClapTrap::name = name + "_ClapTrap";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

}

DiamondTrap::DiamondTrap(const DiamondTrap &p)
{
    std::cout << "DiamondTrap copy Const Called" << std::endl;
    *this = p;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Was Succesfully Destroid" << std::endl;

}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &p)
{
    this->name = p.name;
    this->attackDamage = p.attackDamage;
    this->energyPoints = p.energyPoints;
    this->hitPoints = p.hitPoints;

    return *this;
}

void DiamondTrap::WhoAmI()
{
    std::cout << "I AM " << this->name << " from Diamond" << std::endl;
}