/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:39:48 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/20 14:39:48 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
public:
    Awesome(void) : _n(42) { return; }
    int get(void) const { return this->_n; }

private:
    int _n;
};
std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
    o << rhs.get();
    return o;
}
template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
    return;
}

int main()
{
    int tab[] = {0, 1, 2, 3, 4}; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome tab2[5];
    iter(tab, 5, print);
    iter(tab2, 5, print);
    return 0;
}

// void uppercase(const char &c)
// {
//     std::cout << (char)(c - 32);
// }

// void power(const int &x)
// {
//     std::cout << x * x << " ";
// }

// #define ARR_SIZE 6

// int main()
// {
//     char    str[ARR_SIZE + 1] = "abcdef";
//     int     arr[ARR_SIZE] = {0, 1, 2, 3, 4, 5};

//     iter(str, ARR_SIZE, uppercase);
//     std::cout << std::endl;;
    
//     iter(arr, ARR_SIZE, power);
//     std::cout << std::endl;;

//     return 0;
// }