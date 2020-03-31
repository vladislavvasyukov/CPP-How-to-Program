#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee {
private:
	std::string first_name;
	std::string last_name;
	int salary;
public:
	Employee(std::string, std::string, int);

	std::string getFirstName();
	void setFirstName(std::string);

	std::string getLastName();
	void setLastName(std::string);

	int getSalary();
	void setSalary(int);
};
#endif
