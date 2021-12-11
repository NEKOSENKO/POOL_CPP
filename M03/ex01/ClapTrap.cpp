/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:50:41 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/11 14:51:15 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->attackDamage = 0;
    this->energyPoints = 0;
    this->hitPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap &p)
{
    *this = p;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap & ClapTrap::operator= (const ClapTrap &p)
{
    this->name = p.name;
    this->attackDamage = p.attackDamage;
    this->energyPoints = p.energyPoints;
    this->hitPoints = p.hitPoints;

    return *this;
}

//ClapTrap <name> attack <target>, causing <damage> points of damage!

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " Took " << amount << " Amount of damage " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     std::cout << "ClapTrap " << this->name << " Reapaired " << amount << " units of damage " << std::endl;
}