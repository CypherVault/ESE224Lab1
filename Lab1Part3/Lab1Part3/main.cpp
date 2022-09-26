#include <iostream> 
#include <math.h> 
#include "Student.h"



int main() {
	//some s*** variables
	int i;
	std::string n;
	std::string e;
	std::string m;

	//initializing the strings

	Student p1;
	std::cout << "Enter the information of a new student." << std::endl;
	std::cout << "ID:"; std::cin >> i;
	std::cout << "NAME:"; std::cin >> n;
	std::cout << "EMAIL:"; std::cin >> e;
	std::cout << "MAJOR:"; std::cin >> m;
	Student p2(i, n, m, e);
	std::cout << "information of the new student.";
	std::cout << std::endl << "ID:" << p2.getID();
	std::cout << std::endl << "NAME:" << p2.getName();
	std::cout << std::endl << "EMAIL:" << p2.getMajor();
	std::cout << std::endl << "MAJOR:" << p2.getEmail() << std::endl;

	// using arbitrary fucntions
	std::cout << "information of the default constructor student.";
	std::cout << std::endl << "ID:" << p1.getID();
	std::cout << std::endl << "NAME:" << p1.getName();
	std::cout << std::endl << "EMAIL:" << p1.getMajor();
	std::cout << std::endl << "MAJOR:" << p1.getEmail() << std::endl;

	std::cout << std::endl << "Enter a new ID for Student 1.";
		std::cin >> i;
	p1.changeID(i);

	std::cout << std::endl << "Enter a new EMAIL for Student 1.";
	std::cin >> e;
	p1.changeEmail(e);

	std::cout << std::endl << "Enter a new NAME for Student 1.";
	std::cin >> n;
	p1.changeName(n);

	std::cout << std::endl << "Enter a new MAJOR for Student 1.";
	std::cin >> m;
	p1.changeMajor(m);

	//print it all
	p1.printInfo();
	p2.printInfo();



	return 0;
}