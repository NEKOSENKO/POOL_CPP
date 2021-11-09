/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:51:08 by mbrija            #+#    #+#             */
/*   Updated: 2021/11/09 13:42:15 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_HPP__
#define __KAREN_HPP__

#include <iostream>
#include <string>
#include <iomanip>

class Karen
{
private:
   void debug(void);
   void warning(void);
   void info(void);
   void error(void);
   
public:
    Karen();
    ~Karen();
    void complain(std::string level);

};
typedef void (Karen::*AngryKaren)(void);

#endif