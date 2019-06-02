#include "Account.class.hpp"

int Account::_totalAcc = 0;
int Account::_totalDep = 0;
int Account::_totalAmo = 0;
int Account::_totalWith = 0;

Account::Account(int openingDeposit)
{
	this->_amount = openingDeposit;
	this->_totalAmo += this->_amount;
	this->_deposits = 0;
	this->_withdrawals = 0;
	this->_index = this->_totalAcc;
	this->_totalAcc++;
	_TimeStamp();
	std::cout << " index:" << this->_index << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account()
{
	this->_amount = 0;
	this->_deposits = 0;
	this->_withdrawals = 0;
	this->_index = this->_totalAcc;
	this->_totalAcc++;
	_TimeStamp();
	std::cout << " index:" << this->_index << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	this->_totalAmo -= this->_amount;
	this->_totalAcc--;
	_TimeStamp();
	std::cout << " index:" << this->_index << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
	_TimeStamp();
	std::cout << " accounts:" << _totalAcc << ";amounts:" << _totalAmo << ";deposits:" << _totalDep << ";withdrawals:" << _totalWith << std::endl;
}

void Account::makeDeposit(int amount)
{
	this->_deposits++;
	this->_totalDep++;
	_TimeStamp();
	std::cout << " index:" << this->_index
			  << ";p_amount:" << this->_amount << ";deposit:" << amount << ";amount:" << this->_amount + amount << ";nb_deposits:" << this->_deposits << std::endl;
	this->_amount += amount;
	this->_totalAmo += amount;
}

void Account::makeWithdrawal(int amount)
{
	if (amount < this->_amount)
	{
		this->_withdrawals++;
		this->_totalWith++;
		_TimeStamp();
		std::cout << " index:" << this->_index
				  << ";p_amount:" << this->_amount << ";withdrawal:" << amount << ";amount:" << this->_amount - amount << ";nb_withdrawals:" << this->_withdrawals << std::endl;
		this->_amount -= amount;
		this->_totalAmo -= amount;
	}
	else
	{
		_TimeStamp();
		std::cout << " index:" << this->_index << ";p_amount:" << this->_amount << ";withdrawal:"
				  << "refused" << std::endl;
	}
}

void Account::_TimeStamp()
{
	time_t now = std::time(0);
	tm *ltm = std::localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900 << (ltm->tm_mon <= 9 ? "0" : "") << ltm->tm_mon + 1 << (ltm->tm_mday <= 9 ? "0" : "")<< ltm->tm_mday << "_" << 1 + ltm->tm_hour << 1 + ltm->tm_min << 1 + ltm->tm_sec << "]";
}