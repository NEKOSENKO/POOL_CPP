/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:43:01 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/18 14:29:13 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <iostream>
#include <iomanip>
#include <string>


class Zombie
{
private:
    std::string name;
   
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    std::string get_Name();
    void        set_Name(std::string name);
    void  announce(void);
    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );
    
};

#endif