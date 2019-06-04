#ifndef ACCOUNTING__CLASS_HPP
#define ACCOUNTING__CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

class Account
{
private:
	int			_index;
	int			_amount;
	int			_deposits;
	int			_withdrawals;
	static int	_totalAcc;
	static int	_totalDep;
	static int	_totalWith;
	static int	_totalAmo;
	static void	_TimeStamp();
public:
					Account(int openingDeposit);
					Account();
					~Account();
	typedef Account	t;
	static void 	displayAccountsInfos();
	void			makeDeposit(int amount);
	void			makeWithdrawal(int amount);
};



#endif