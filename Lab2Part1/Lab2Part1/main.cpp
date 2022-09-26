#include <iostream>
#include <math.h> 
#include "Point.h"


int main() {
	Point p1;
	Point p2(3.4, 2.1);  // constructs the default AND hardcoded new one 
	double  x, y;

	// some variables for use in reading inputs

	std::cout << "euclidian distance from the origin of pair 1 (" << p1.getX() << "," << p1.getY() << ") is:";
	std::cout << p1.dist2origin() << std::endl;


	std::cout << "euclidian distance from the origin of pair 2 (" << p2.getX() << "," << p2.getY() << ") is:";       // this prints the coordinates and eucliian distance of each pair seperately
	std::cout << p2.dist2origin();
	std::cout << "enter new coordinates for pair 2: " << std::endl << std::endl;
	std::cout << "x:";
	std::cin >> x;
	std::cout << "y:";
	std::cin >> y;// reads input from user to overwrite the old pair 2 of coordinates 

	p2.setX(x);// sets them 
	p2.setY(y);
	std::cout << "euclidian distance from the origin of pair (" << p2.getX() << "," << p2.getY() << ") is:";
	std::cout << p2.dist2origin();
	// prints new info aftet changes 
	 
	p1.Print();

	std::cout << "The distance between " << p1.Distance(p2) << std::endl;
	std::cout << "The distance between the two points is " << p1 - p2 << std::endl;
	std::cout << "Are the two points the same? " << p2.Equal(p1) << std::endl;
	std::cout << "Are the two points the same? " << (p1==p2) << std::endl;








	return (0);
}