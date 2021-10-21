/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:28:04 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/21 14:56:46 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon weap;
public:
    HumanA(const char *name , Weapon wp);
    ~HumanA();
    void attack();
};

#endif