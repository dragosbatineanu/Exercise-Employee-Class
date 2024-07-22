#include "Employee.h"

using namespace std;

Employee::Employee(std::string& n, int id, double s) : name(n), idNumber(id), salary(s) {}

void Employee::setName(const std::string& n) {
	name = n;
}

void Employee::setIdNumber(int id) {
	int idNumber = id;
}

void Employee::setSalary(double s) {
	double salary = s;
}

std::string Employee::getName() const{
	return name;
}

int Employee::getIdNumber() const{
	return idNumber;
}

double Employee::getSalary() const {
	return salary;
}

//Method for raise

void Employee::giveRaise(double percentage) {
	if (percentage > 0) {
		salary += salary * (percentage / 100);
	}
}