#include <iostream>

using namespace std; 

int main()
{
	int x, y;
	cout << "Enter two integers:" << endl;
	cin >> x >> y;
	if (x > y)
	{
		cout << x << " is larger";
	} 
	else if (y > x)
	{
		cout << y << " is larger";
	}
	else
	{
		cout << "These numbers are equal";
	}
}