#include <iostream>
using namespace std;

int main()
{
	int total_miles = 0;
	int total_gallons = 0;

	

	while (true)
	{
		int miles; 
		int gallons;

		cout << "Enter miles driven (-1 to quit):";
		cin >> miles;

		if (miles == -1)
			break;

		cout << "Enter gallons used:";
		cin >> gallons;

		cout << "MPG this trip: " << miles / float(gallons) << endl;
		total_miles += miles;
		total_gallons += gallons;
		cout << "Total MPG: " << float(total_miles) / total_gallons << endl << endl;
	}
}
