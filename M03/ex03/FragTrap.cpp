/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:01:41 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 14:30:54 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Const Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Name Const Called" << std::endl;
    this->name = name;
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;

}

FragTrap::FragTrap(const FragTrap &p)
{
    std::cout << "FragTrap copy Const Called" << std::endl;
    *this = p;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Was Succesfully Destroid" << std::endl;

}

FragTrap & FragTrap::operator= (const FragTrap &p)
{
    this->name = p.name;
    this->attackDamage = p.attackDamage;
    this->energyPoints = p.energyPoints;
    this->hitPoints = p.hitPoints;

    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << " HighFive Everyone" << std::endl;
}