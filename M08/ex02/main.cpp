/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:44:00 by mbrija            #+#    #+#             */
/*   Updated: 2022/03/09 14:14:16 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    /********/ 

{
    std::cout << "####################" << std::endl;
    
    std::list<int> lis;
    lis.push_back(5);
    lis.push_back(17);
    std::cout << lis.back() << std::endl;
    lis.pop_back();
    std::cout << lis.size() << std::endl;
    lis.push_back(3);
    lis.push_back(5);
    lis.push_back(737);
    //[...]
    lis.push_back(0);
    std::list<int>::iterator it = lis.begin();
    std::list<int>::iterator ite = lis.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

}
    return 0;
}
