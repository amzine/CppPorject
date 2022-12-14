/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:15:04 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/17 05:43:05 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_totalAmount += initial_deposit;
    _nbAccounts++;
    this->_displayTimestamp();
    std::cout << "index:"<< this->_accountIndex <<";";
    std::cout << "amount:" << this->_amount << ";created" << std::endl;
    return ;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:"<< this->_accountIndex <<";";
    std::cout << "amount:" << this->_amount << ";closed" <<std::endl;
    return;        
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return(_totalAmount);   
}

int Account::getNbDeposits()
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "account:" << getNbAccounts() <<";";
    std::cout << "total:" << getTotalAmount() <<";";
    std::cout << "deposits:" << getNbDeposits() <<";";
    std::cout << "withdrawals:" << getNbWithdrawals() <<std::endl;
    return ;
}

void Account::makeDeposit(int deposit)
{
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    this->_totalAmount += deposit;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    return;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    int tmp_amount = this->_amount;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex <<";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount -= withdrawal;
    if (checkAmount() == 1)
    {
        this->_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal <<";";
        std::cout << "amount:" << this->_amount <<";";
        std::cout << "nb_withdrawal:" <<this->_nbWithdrawals <<";" << std::endl;
        return(true);
    }
    else
    {
        this->_amount = tmp_amount;
        return(false);
    }
}

int Account::checkAmount() const
{
    if (this->_amount <= 0)
    {
        std::cout << "withdrawal:refused" <<std::endl;
        return(0);
    }
    return(1);
}

void Account::displayStatus() const
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex <<";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
void Account::_displayTimestamp()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "[" << std::setfill('0') << 1900 + ltm->tm_year << std::setw(2) <<
	1 + ltm->tm_mon << std::setw(2) << ltm->tm_mday << "_" << std::setw(2) << 
	ltm->tm_hour << std::setw(2) << ltm->tm_min << std::setw(2) << ltm->tm_sec << "] ";
}

