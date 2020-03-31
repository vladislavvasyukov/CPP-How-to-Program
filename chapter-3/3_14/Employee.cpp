#include <string>
#include "Employee.h"

Employee::Employee(std::string first_name, std::string last_name, int salary) {
	setFirstName(first_name);
	setLastName(last_name);
	setSalary(salary);
}

std::string Employee::getFirstName()
{
	return first_name;
}

void Employee::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

std::string Employee::getLastName()
{
	return last_name;
}

void Employee::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

int Employee::getSalary()
{
	return salary;
}

void Employee::setSalary(int salary)
{
	if (salary < 0)
	{
		this->salary = 0;
	}
	else
	{
		this->salary = salary;
	}
}
