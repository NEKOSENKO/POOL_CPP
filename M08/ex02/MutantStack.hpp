/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:45:15 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/06 17:10:42 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack
{
private:
    std::stack<T> data;
public:
    MutantStack(/* args */)
    {
        data = new T[0];
    }
    ~MutantStack()
    {
    }
    bool empty()
    {
        return data.empty();
    }
    
    int size()
    {
        return data.size();
    }
    
    T top()
    {
        return data.top();
    }
    
    void push(T toPush)
    {
        data.push(toPush);
    }
    
    T pop()
    {
        data.pop();
    }

    
    
};

