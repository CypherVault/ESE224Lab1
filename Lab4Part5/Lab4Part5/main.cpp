#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

int main() {
	
	double r;
	double fakepi = (static_cast<double>(7) / 9);
	double a1;
	double a2;
	std::cout << "enter the radius of your circle";
	std::cin >> r;

	//calculate area with octagon method 
	a1 = pow((r*2),2) * fakepi;
	a2 = 3.1459625 * (pow(r, 2));
	std::cout << "estimate of area with octagon method:" << a1 << "Proper value using pie:" << a2 << std::endl;

	return 0;
}