#include <iostream> 
#include <math.h> 
#include <iomanip>
#include "Books.h"

int main() {

	Books b1;

	Books b2(2, "Lorax", "benny mans", "Intense Romance", 69420);

	Books b3(3, "hate", "george washington", "history", 43);

	Books b4(4, "The bible", "God", "heresey", 666);

	Books b5( 5, "better call saul" , "walter mans", "DIY", 23);

	b1.Print(); 
	b2.Print();
	b3.Print();
	b4.Print();
	b5.Print();

std::cout << "Copying b2 into b3...." << std::endl;
	(b3 = b2);
	std::cout << std::endl;
	b2.Print();
	b3.Print();

	return 0;
}