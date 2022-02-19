/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:35:29 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/19 15:04:29 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T>
T min(T a, T b)
{
    if (a < b)
        return a;
    else
        return b;
}

template <typename T>
void swap(T &a, T &b)
{
    T c;
    
    c = a;
    a = b;
    b = c;
}

