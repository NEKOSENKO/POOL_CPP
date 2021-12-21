/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:58:18 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/21 11:48:49 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain Const Called" << std::endl;
}

Brain::Brain(const Brain &p)
{
    std::cout << "Brain Copy Const Called" << std::endl;
    *this = p;
}

Brain::~Brain()
{
    std::cout << "Brain DeConst Called" << std::endl;
}

Brain &Brain::operator=(const Brain &p)
{
    return *this;
}