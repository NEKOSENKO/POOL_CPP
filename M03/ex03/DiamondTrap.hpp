/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:15:53 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 14:55:52 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name); 
    DiamondTrap(const DiamondTrap &p);
    ~DiamondTrap();
    DiamondTrap & operator= (const DiamondTrap &p);
    void WhoAmI();
    using ScavTrap::attack;
};



#endif