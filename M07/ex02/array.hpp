/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:23:00 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/22 17:00:52 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    T *_array;
    unsigned int _len;
public:

    Array()
    {
        _array = new T[0];
        _len = 0;
    }
    Array(unsigned int n)
    {
        _array = new T[n];
        _len = n;    
    }
    Array(Array &p)
    {
        this->_array = new T[p._len];
        
        for (unsigned int i = 0; i < p._len; i++)
            _array[i] = p._array[i];
        _len = p._len;
    }
    
    class OutofBoundException : public std::exception

    {
        const char *what(void) const throw()
        {
            return "index out of bound";
        }
    };
    
    Array &operator= (const Array &p)
    {
        if (_array)
            delete [] _array;
        _array = new T[p._len];
        
        for (unsigned int i = 0; i < _len; i++)
            _array[i] = p._array[i];
        _len = p._len;
        
        return (*this);
    }
    int &operator[] (unsigned int size)
    {
        if (size >= _len || size < 0)
        {
            throw  OutofBoundException();
            exit(0);        
        }
        return (_array[size]);
    }

    int size()
    {
        int i = 0;
        while (this->_array[i])
            i++;
        return i;
    }
    
    ~Array()
    {
        
    }
};
