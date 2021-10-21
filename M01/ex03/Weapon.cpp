/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:24:45 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/21 14:40:31 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string Weapon)
{
    this->type = Weapon;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
    return this->type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}