#include <iostream> 
#include <math.h> 
#include <iomanip>
 
int main() {
	int cont=1;
	char entered;
	std::cout << "Enter your letter grade to know the gpa equivalent. Enter 'e' when completed" << std::endl;

	while (cont) {

		std::cout << std::endl << "Enter a letter grade:";
		std::cin >> entered; 

		switch (entered) {
		case 65: case 97:
			std::cout << "4.00" << std::endl;
			break; 
		case 66: case 98:
			std::cout << "3.00" << std::endl;
			break;
		case 67: case 99:
			std::cout << "2.00" << std::endl;
			break;
		case 68: case 100:
			std::cout << "1.00" << std::endl;
			break;
		case 70: case 102:
			std::cout << "0.00" << std::endl;
			break;
		case 69: case 101:
			cont = 0;
			break;
		default:
			std::cout << "not valid input";
		}
	}
	return 0;
}