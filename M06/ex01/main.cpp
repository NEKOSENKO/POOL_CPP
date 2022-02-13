/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:19:49 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/13 18:57:43 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main ()
{
    Data *ptr;
    Data *ptr2;
    ptr->data = "SENKO";

    uintptr_t uni = serialize(ptr);
    ptr2 = deserialize(uni);

    std::cout << "original            : " << ptr << std::endl;
    std::cout << "original -> uintptr : " << uni << std::endl;
    std::cout << "ptr -> original     : " << ptr2 << std::endl;
    
    return 0;
}