/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:01:41 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/11 15:36:55 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Const Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Name Const Called" << std::endl;
    this->name = name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;

}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Was Succesfully Destroid" << std::endl;

}

ScavTrap & ScavTrap::operator= (const ScavTrap &p)
{
    
}

void ClapTrap::attack( const std::string &target)
{
    std::cout << "ClapTrap From ScavTrap" << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap Entered Gate Keeper Mode" << std::endl;
}