/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:45:15 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/06 20:40:56 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
    // std::stack<T> data;
public:
    MutantStack(/* args */)
    {
       
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

    typedef MutantStack::std::stack<T>::container_type::iterator iterator;
    MutantStack<int>::std::stack<T>::container_type::iterator it = mstack.begin();
};

