/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:58:15 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 17:54:12 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include <iostream>
#include <string>
#include <iomanip>

class Brain
{
private:

public:
    std::string ideas[100];
    Brain(/* args */);
    virtual ~Brain();
};



#endif