/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:07:13 by mbrija            #+#    #+#             */
/*   Updated: 2021/10/09 12:23:54 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdio.h>
#include <time.h>

Account::Account( void )
{   
    Account::_accountIndex = 0;
}
Account::Account( int initial_deposit )
{
	//timehere
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account( void )
{
    //timehere
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return Account::_nbAccounts;
}
int	    Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}
int	    Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}
int	    Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}
void    Account::displayAccountsInfos( void )
{
    //timehere
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
		_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;

}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::makeDeposit( int deposit )
{
    //timehere
	_totalNbDeposits++;
	_nbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;

}
bool	Account::makeWithdrawal( int withdrawal )
{
    //timehere
	if (withdrawal <= _amount)
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount +  withdrawal << ";withdrawal:" << withdrawal
        << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return 1;
	}
	else
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"
        << "refused" << std::endl;
        return 0;
    }
}
int		Account::checkAmount( void ) const
{
    return 1;
}
void	Account::displayStatus( void ) const
{
	//timehere
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" <<
        _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
    return ;
}

//time function here VOID
