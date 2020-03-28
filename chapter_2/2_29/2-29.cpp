#include <iostream>

using namespace std; 

int main()
{
	cout << "integer\t square\t cube" << endl;
	for (int i = 0; i < 11; ++i)
	{
		cout << i << '\t' << i*i << '\t' << i*i*i << '\t' << endl;
	}
}