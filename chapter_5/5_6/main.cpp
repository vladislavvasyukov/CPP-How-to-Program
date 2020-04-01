#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	int count = 0;
	int number;
	
	
	while (true)
	{
		cout << "Enter number :";
		cin >> number;
		if (number == 9999)
			break;
			
		total += number;
		count += 1;
	}
	
	cout << "Average = " << total / float(count) << endl;
}
