/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:28:12 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/01 14:00:10 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

template <typename T>
void easyfind(T cont, int occ)
{
    if (std::find(cont.begin(), cont.end(), occ) != cont.end())
        std::cout << "occurrence found \n";
    else
        std::cout << "occurrence not found \n";
}