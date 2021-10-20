/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:10:49 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/20 16:16:30 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie *Zm = new Zombie[N];
    int i = 0;

    while (i < N)
    {
        Zm[i].name = name;
        Zm[i].announce();
        i++;
    }

    return Zm;
}