/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:17:31 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 14:30:08 by mbrija           ###   ########.fr       */
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
    this->name = name;
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;

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