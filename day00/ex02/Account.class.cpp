#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int openingDeposit)
{
	this->_amount = openingDeposit;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account()
{
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	this->_totalAmount -= this->_amount;
	this->_nbAccounts--;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";amounts:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int amount)
{
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount << ";deposit:" << amount << ";amount:" << this->_amount + amount << ";nb_Deposits:" << this->_nbDeposits << std::endl;
	this->_amount += amount;
	this->_totalAmount += amount;
}

bool Account::makeWithdrawal(int amount)
{
	if (amount < this->_amount)
	{
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				  << ";p_amount:" << this->_amount << ";withdrawal:" << amount << ";amount:" << this->_amount - amount << ";nb_Withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= amount;
		this->_totalAmount -= amount;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:"
				  << "refused" << std::endl;
		return false;
	}
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	time_t now = std::time(0);
	tm *ltm = std::localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900 << (ltm->tm_mon <= 9 ? "0" : "") << ltm->tm_mon + 1 << (ltm->tm_mday <= 9 ? "0" : "") << ltm->tm_mday << "_" << (ltm->tm_hour <= 9 ? "0" : "") << 1 + ltm->tm_hour << (ltm->tm_min <= 9 ? "0" : "") << 1 + ltm->tm_min << (ltm->tm_sec <= 9 ? "0" : "") << 1 + ltm->tm_sec << "]";
}