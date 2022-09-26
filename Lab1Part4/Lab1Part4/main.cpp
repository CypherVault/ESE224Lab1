#include <iostream> 
#include <math.h> 
#include "Class.h"



int main() {
	double hw, lab, project, exam;
	//default config
	Class p1;

	std::cout << "Hw grade for default:" << p1.getHW();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Lab grade for default:" << p1.getLAB();
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Project grade for default:" << p1.getPROJECT();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Exam grade for default:" << p1.getEXAM();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Final grade for default:" << p1.getFINAL();
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Enter the Hw grade for this new class:";
	std::cin >> hw;
	std::cout << "Enter the Lab grade for this new class:";
	std::cin >> lab;
	std::cout << "Enter the Project grade for this new class:";
	std::cin >> project;
	std::cout << "Enter the Exam grade for this new class:";
	std::cin >> exam;
	std::cout << std::endl; 
	std::cout << std::endl;

	Class p2(hw, lab, project, exam);

	std::cout << "Hw grade for this new class:" << p2.getHW();
	std::cout << std::endl; std::cout << std::endl;

	std::cout << "Lab grade for this new class:" << p2.getLAB();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Project grade for this new class:" << p2.getPROJECT();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Exam grade for this new class:" << p2.getEXAM();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Final grade for this new class:" << p2.getFINAL();
	std::cout << std::endl;



}