#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
	cout << "Hello world" << endl;
	Invoice inv(10, 200);
	Invoice inv2("text", "description", 12, 300);
	cout << inv2.getInvoiceAmount() << endl;
}
