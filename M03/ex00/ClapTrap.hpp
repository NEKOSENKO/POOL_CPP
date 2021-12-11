/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:50:45 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/11 14:48:13 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAP_TRAP_HPP_
#define _CLAP_TRAP_HPP_

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap
{
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
    
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &p);
    ~ClapTrap();
    ClapTrap & operator= (const ClapTrap &p);
    
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif