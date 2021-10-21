/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:23:06 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/21 14:56:39 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <iostream>
#include <string>
#include <iomanip>

class Weapon
{
    private:
      std::string type;
      
    public:
        Weapon();
        Weapon(std::string Weapon);
        ~Weapon();
        std::string getType();
        void setType(std::string type);

        
};

#endif