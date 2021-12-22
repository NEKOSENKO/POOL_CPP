/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:58:18 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/21 16:13:02 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain Const Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain DeConst Called" << std::endl;
}
