#include <iostream>
using namespace std;


int main()
{
	int count;	
	int smallest;
	int number;

	cout << "Enter count of integers: ";
	cin >> count;

	for (int i=0; i< count; i++)
	{
		cout << "Enter integer: ";
		cin >> number;
		if (number < smallest)
		{
			smallest = number;
		}
	}

	cout << "smallest = " << smallest << endl;
}
