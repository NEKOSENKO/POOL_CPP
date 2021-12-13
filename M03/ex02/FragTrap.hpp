/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:01:38 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 14:34:29 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAG_TRAP_HPP_
#define _FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &p);
    ~FragTrap();
    FragTrap & operator= (const FragTrap &p);
    void highFivesGuys(void);
};


#endif