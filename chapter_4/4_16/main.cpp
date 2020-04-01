#include <iostream>
using namespace std;

int main()
{
	float hours;
	float hourly_rate;
	float salary;
	
	while (true)
	{
		cout << "Enter hours worked (-1 to end): ";
		cin >> hours;
		if (hours == -1)
			break;
			
		cout << "Enter hourly rate of the employee ($00.00): ";
		cin >> hourly_rate;
		
		if (hours <= 40)
		{
			salary = hours * hourly_rate;
		}
		else
		{
			salary = 40 * hourly_rate + (hours - 40) * 1.5 * hourly_rate;
		}
		
		cout << "Salary is $" << salary << endl << endl;
			
	}
}
