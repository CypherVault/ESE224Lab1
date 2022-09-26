#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include "Student.h"

Student::Student() {
	ID = 1234567890;
	name = "ESE224 TA";
	major = "Electrical Engineering";
	email = "ese224ta@stonybrook.edu";
};
		
Student::Student(int id, std::string Name, std::string Major, std::string Email)
{
	ID = id;
	name = Name;
	major = Major;
	email = Email;
};

int Student::getID() {

	return ID;
};

std::string Student::getName() {

	return name;
};

std::string Student::getEmail() {

	return email;
};

std::string Student::getMajor() {

	return major;
};

void Student::changeID(int id) {
	ID = id;
};

void Student::changeName(std::string Name) {
	name = Name;
};

void Student::changeEmail(std::string Email) {
	email = Email;

};

void Student::changeMajor(std::string Major) {
	major = Major;

};

void Student::printInfo() {
	std::cout << "Student Information: ID:(" << ID << ") " << "NAME:(" << name << ")  " << "EMAIL:(" << email << ")  " << "MAJOR:(" << major << ")  ";

};