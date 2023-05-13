/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:37:41 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/12 16:39:28 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp( void )
{
	std::cout<<"["<<__TIMESTAMP__<<"]";
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<" index:"<<getNbAccounts()<<";amount:"<<getTotalAmount()<<";deposits:"<<getNbDeposits()<<";winthdrawals:"<<getNbWithdrawals()<<'\n';
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<" accounts:"<<getNbAccounts()<< ";total:" << getTotalAmount()<<";deposits:"<<getNbDeposits()<<"withdrawals:"<<getNbWithdrawals()<<'\n';
}

Account::Account( int initial_deposit)
{
	_accountIndex = ++_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount = _totalAmount + initial_deposit;
	_displayTimestamp();
	std::cout<<" index:"<<getNbAccounts()<<";amount:"<<initial_deposit<<";created\n";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";closed\n";
}


void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    ++_nbDeposits;
    ++Account::_totalNbDeposits;
    Account::_totalAmount += deposit;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
    if (_amount < withdrawal)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    ++_nbWithdrawals;
    ++Account::_totalNbWithdrawals;
    Account::_totalAmount -= withdrawal;
    std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount(void) const
{
    return _amount;
}

