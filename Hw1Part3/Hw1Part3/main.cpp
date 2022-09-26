#include <iostream> 
#include <math.h> 
#include "circle.h"
#include <iomanip>

int main() {
	double x, y, r, n;

	Circle c1;

	std::cout << "information of the default constructor circle before editing.";
	c1.Print();

	std::cout << "Enter the information of a new circle." << std::endl;
	std::cout << "XCoord:"; std::cin >> x; std::cout << std::endl;
	std::cout << "YCoord:"; std::cin >> y; std::cout << std::endl;
	std::cout << "radius:"; std::cin >> r; std::cout << std::endl;
	Circle c2(x, y, r);




	c2.Print();
	

	std::cout << "What woud you like to mutiply the default constructors radius by?";
	std::cin >> n;
	c1* n;
	std::cout << "information of the default constructor circle after editing."; 
	c1.Print();

	std::cout << "ARE THEY THE SAME CIRCLE:" << (c1 == c2);



	return 0;

}