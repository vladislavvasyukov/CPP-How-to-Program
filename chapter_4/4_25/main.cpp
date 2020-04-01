#include <iostream>
using namespace std;

int main()
{
	int size;
	
	while (true)
	{
		cout << "Input the integer between 1 and 20: ";
		cin >> size;
		if (size > 0 || size < 21)
			break;
	}
	
	if (size == 1)
	{
		cout << "*";
		return 0;
	}
	
	for (int i=1; i<=size; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i=1; i<=size-2; i++)
	{
		cout << "*";
		for (int j=1; j<=size-2; j++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	
	for (int i=1; i<=size; i++)
	{
		cout << "*";
	}
	cout << endl;
}
