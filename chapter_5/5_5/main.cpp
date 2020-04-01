#include <iostream>
using namespace std;

int main()
{
	int count;
	int sum = 0;
	int number;
	
	cout << "Enter count of numbers: ";
	cin >> count;
	
	for (int i=0; i<count; i++)
	{
		cout << "Enter number :";
		cin >> number;
		sum += number;
	}
	
	cout << "Sum = " << sum << endl;
}
