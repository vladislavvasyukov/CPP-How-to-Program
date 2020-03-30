#include <iostream>
#include "Account.h"


Account::Account(int balance)
{
	if (balance < 0)
	{
		std::cout << "Balance must be > 0" << std::endl;
		this->balance = 0;
	}
	else
	{
		this->balance = balance;
	}
}

void Account::credit(int amount)
{
	balance += amount;
}

void Account::debit(int amount)
{
	if (balance - amount < 0)
	{
		std::cout << "amount exceeded account balance." << std::endl;
	}
	else
	{
		balance -= amount;
	}
}

int Account::getBalance()
{
	return balance;
}
