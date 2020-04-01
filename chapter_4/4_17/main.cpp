#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int max;
	
	while (counter < 11)
	{
		cout << "Input number #" << counter << ": ";
		cin >> number;
		if (counter == 1 || number > max)
		{
			max = number;
		}
		counter++;
	}
	
	cout << "Largest: " << max << endl;
}
