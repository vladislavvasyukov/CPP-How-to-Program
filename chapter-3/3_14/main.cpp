#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	cout << "start" << endl;
	Employee e1("Vasyukov", "Vladislav", -26);
	cout << e1.getFirstName() << " " << e1.getSalary() << endl;
}
