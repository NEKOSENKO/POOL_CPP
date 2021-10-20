/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:42:22 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/20 16:08:23 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
    Zombie Zm("blegh");
    Zombie *rnd;

    rnd = Zm.newZombie("Grrrr");
    Zm.randomChump("Grrrrr");
    delete rnd;

    return 0;
    
}