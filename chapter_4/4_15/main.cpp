#include <iostream>
using namespace std;

int main()
{
	int sales;
	int salary;
	
	while (true)
	{
		cout << "Enter sales in dollars (-1 to end): ";
		cin >> sales;
		if (sales == -1)
			break;
		
		salary = 200 + sales * 0.09;
		cout << "Salary is: $" << salary << endl << endl;
	}
}
