#include <iostream> 
#include <math.h> 
#include <iomanip>


double convert2(double g) {

	double number = g;
	double firstpart = 1;
	double secondpart = 1;
	double final;

	firstpart = (int)g;
	 
	g -= firstpart;

	secondpart = (int)(100 * g);

	final = firstpart + (secondpart / 100);


	return final;



}

int main() {
	double n;
	double greatest;
	int i;

	std::cout << "Enter a Temperature:";
	std::cin >> n;
	greatest = n;
	while (n>=0) {
		
		if (n > greatest) {
			greatest = n;
		}
		else {
		}
		std::cout << "Enter a Temperature:";
		std::cin >> n;
	}


	std::cout << "Greatest Temperature encountered:" << convert2(greatest);

}