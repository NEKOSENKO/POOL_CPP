/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:07:13 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/01 17:53:19 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( void )
{   
    Account::_accountIndex = 0;
}
Account::Account( int initial_deposit )
{
    std::cout << "index:";
    std::cout << Account::_accountIndex;
    std::cout << ";";
    std::cout << "amount:";
    std::cout << _amount;
    std::cout << ";created";
    std::cout << std::endl;
    Account::_accountIndex++;
}
Account::~Account( void )
{
    std::cout << "index:";
    std::cout << Account::_accountIndex;
    std::cout << ";";
    std::cout << "amount:";
    std::cout << _amount;
    std::cout << ";closed";
    std::cout << std::endl;
    
    Account::_accountIndex--;
}
