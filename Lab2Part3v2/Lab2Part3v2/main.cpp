#include <iostream>
#include <iomanip>
#include <cmath>
#include "rectangle.h"

int main() 
{
	double x, y, w, h;// this is one of thentest cases so might as well initlaize
	Rectangle r1(0.0, 0.0, 4.0, 4.0); 
	std::cout << "enter values for user inputted rectangle 2" << std::endl;
	std::cout << "x:";
	std::cin >> x;
	std::cout << std::endl;
	
	std::cout << "y:";
	std::cin >> y;
	std::cout << std::endl;
	
	std::cout << "w:";
	std::cin >> w;
	std::cout << std::endl;

	std::cout << "h";
	std::cin >> h;
	std::cout << std::endl;

	r1.print();
	

	Rectangle p2(x, y, w, h);
	p2.print();

	std::cout << "IOU is:";


	std::cout << p2.compute_IOU(r1); ;





}