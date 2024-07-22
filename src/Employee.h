#pragma once
#include <string>

class Employee {
	
private:
	std::string name;
	int idNumber;
	double salary;

public:
	Employee(std::string& n, int id, double s);

	//setter methonds

	void setName(const std::string& n);
	void setIdNumber(int id);
	void setSalary(double s);

	//getter methods

	std::string getName() const;
	int getIdNumber() const;
	double getSalary() const;

	void giveRaise(double percentage);

};