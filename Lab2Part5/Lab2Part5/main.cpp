#include <iostream>
#include <iomanip>
#include <cmath>
#include "Rectangle.h"

int main() {


	double s, b, w, h;

	std::cout << "enter values for user inputted line 1" << std::endl;
	std::cout << "s:";
	std::cin >> s;
	std::cout << std::endl;

	std::cout << "b";
	std::cin >> b;
	std::cout << std::endl;

	Line l1(s, b);


	std::cout << "enter values for user inputted line 2" << std::endl;
	std::cout << "s:";
	std::cin >> s;
	std::cout << std::endl;

	std::cout << "b";
	std::cin >> b;
	std::cout << std::endl;

	Line l2(s, b);


	l1.print();
	l1.getSlope();
	l1.getIntercept();

	std::cout << std::endl;
	std::cout << "are they the same line?:";
	std::cout << (l1 == l2);

	std::cout << std::endl;

	(l1*34.589);
	std::cout << std::endl;
	(l1 + 34.5);




	return  0;
}