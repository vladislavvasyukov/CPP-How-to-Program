#include <iostream>
#include "Account.h"

int main()
{
	Account ac1(23);
	Account ac2(-234);

	ac1.debit(100);
	ac2.credit(200);

	std::cout << ac1.getBalance() << std::endl;
	std::cout << ac2.getBalance() << std::endl;
}
