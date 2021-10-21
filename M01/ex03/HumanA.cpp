/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:28:41 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/21 15:29:38 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const char *name , Weapon & wp)
{
    this->name   = name;
    this->weap = &wp;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << weap->getType() << std::endl;
}