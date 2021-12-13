/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:50:47 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 14:50:01 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Player("DJEW");

    Player.attack("ANYONE");
    Player.takeDamage(2);
    Player.beRepaired(10);
    Player.WhoAmI();
    Player.highFivesGuys();
}