#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include "Water.h"


int main() {
	int i;
	double c;
	// create default constructor
	Water p1;
	std::cout << "Default current value for constructor";

	std::cout << p1.getCurrent() << std::endl;
	std::cout << "Default greatest value for constructor";

	std::cout << p1.getGreatest() << std::endl;
	std::cout << "Default least value for constructor";

	std::cout << p1.getLeast() << std::endl;
	std::cout << "Default average value for constructor";// prints all the constructor values

	std::cout << p1.getAverage() << std::endl;

	for (int i = 0; i < 10; i++) {
		std::cout << "Enter new current water level";// start of the loop and it will always read at the new day start
		std::cin >> c;
		p1.setCurrent(c);
		p1.cycle();														// this  takes in the current, and hands over the current value to the fucntion cycle which takes care of all the calculations and comparisons  
		std::cout << "Days left to monitor:" << (10-i) << std::endl; // displays amount of iterations left to user
	};

	std::cout << " The damn has been overwhelmed! The town below has been destroyed.";
	return 0;
}