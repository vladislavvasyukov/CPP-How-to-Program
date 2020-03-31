#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
private:
	int balance;

public:
	Account(int);
	void credit(int);
	void debit(int);
	int getBalance();
};

#endif
