#include <iostream> 
#include <math.h> 
#include <iomanip>

double atomicWeight( int o, int c, int n, int s, int h) {
	double a;
		
	a = (15.9994 * o) + (12.011 * c) + (14.00674 * n) + (32.066 * s) + (1.00794 * h);
		return (a);
		
	


}
int main() {
	int o, c, n, s, h;
		std::cout << "Please enter the number of Oxygen Atoms:";
		std::cin >> o;
		std::cout << std::endl;
		std::cout << "Please enter the number of Carbon Atoms:";
		std::cin >> c;
		std::cout << std::endl;
		std::cout << "Please enter the number of Nitrogen Atoms:";
		std::cin >> n;
		std::cout << std::endl;
		std::cout << "Please enter the number of Sulfur Atoms:";
		std::cin >> s;
		std::cout << std::endl;
		std::cout << "Please enter the number of Hydrogen Atoms:";
		std::cin >> h;
		std::cout << std::endl;

		
		std::cout << "Atomic Weight of user entered amino acid:";
		std::cout << std::fixed << std::showpoint;
		std::cout << std::setprecision(3);
		std::cout << (atomicWeight(o, c, n, s, h));

	return 0;
}

