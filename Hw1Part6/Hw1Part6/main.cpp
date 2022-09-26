#include <iostream> 
#include <math.h> 
#include <iomanip>


double convert1(double g) {

	double number = g;
	double firstpart = 1;
	double secondpart = 1;
	double final;

	firstpart = (int)g;

	g -= firstpart;

	secondpart = (int)(10 * g);

	final = firstpart + (secondpart / 10);


	return final;



}

int main() {
	double n;
	double least;
	int i = 7;

	std::cout << "Enter a Temperature.7 Days left...     ";
	std::cin >> n;
	least = n;
	while (i > 0) {
		i--;

		if (n < least) {
			least = n;
		}

		else {
		}

		std::cout << "Enter a Temperature." << i; std::cout << " Days left...     "; 
		std::cin >> n;
	
	}


	std::cout << convert1(least);

}