/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:01:41 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 12:48:17 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Const Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Name Const Called" << std::endl;
    this->name = name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;

}

FragTrap::~FragTrap()
{
    std::cout << "Frag Was Succesfully Destroid" << std::endl;

}

FragTrap & FragTrap::operator= (const FragTrap &p)
{
    
}

void ClapTrap::attack( const std::string &target)
{
    std::cout << "ClapTrap From FragTrap" << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << " HighFive Everyone" << std::endl;
}