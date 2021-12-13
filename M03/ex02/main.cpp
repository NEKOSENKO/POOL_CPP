/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:50:47 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 13:09:09 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Player("DJEW");

    Player.attack("ANYONE");
    Player.takeDamage(2);
    Player.beRepaired(10);
    Player.highFivesGuys();
}