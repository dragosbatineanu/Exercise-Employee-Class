#include <iostream>
#include <string>

#include "Employee.h"

int main() {
	//employee variables
	std::string name;
	int idNumber;
	double salary;

	//Employee details
	std::cout << "Enter name:" << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter idNumber:" << std::endl;
	std::cin >> idNumber;
	std::cout << "Enter salary:" << std::endl;
	std::cin >> salary;

	//create employee object

	Employee emp(name, idNumber, salary);

	// Display the employee details
	std::cout << "Employee Details:" << std::endl;
	std::cout << "Name: " << emp.getName() << std::endl;
	std::cout << "ID Number: " << emp.getIdNumber() << std::endl;
	std::cout << "Salary: $" << emp.getSalary() << std::endl;

	// Prompt the user to enter a raise percentage
	double raisePercentage;
	std::cout << "Enter the raise percentage: ";
	std::cin >> raisePercentage;

	// Give the employee a raise
	emp.giveRaise(raisePercentage);

	// Display the updated salary
	std::cout << "Updated Salary: $" << emp.getSalary() << std::endl;

	return 0;
}