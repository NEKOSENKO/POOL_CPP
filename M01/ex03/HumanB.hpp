/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:35:15 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/21 14:57:05 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon Weap;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon wp);
};

#endif