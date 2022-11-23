/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:58:42 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/23 15:41:40 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include "Account.hpp"

// initialisation variables static

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// constructeur

Account::Account( int initial_deposit )
	: _accountIndex( (Account::_nbAccounts)++ ),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_totalAmount -= this->_amount;
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
	time_t	t;
	char	buf[19];
	struct std::tm	*time_info;

	std::time(&t);
	time_info = std::localtime(&t);
	std::strftime(buf, 19, "[%Y%m%d_%H%M%S] ", time_info);
	std::cout << buf;
}
