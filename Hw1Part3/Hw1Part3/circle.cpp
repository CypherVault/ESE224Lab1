#include "circle.h"						
#include <iostream>

#include <iomanip						>

Circle::Circle() {
	yC = 1.5;
    xC = 1.5;
	rad = 2.5;
};

Circle::Circle(double x, double y, double r) {
	yC = y;
	xC = x;
	rad = r;
};

double Circle::getxCoord() {
	return xC;
}

double Circle::getyCoord() {
	return yC;
}

double Circle::getradius() {
	return rad;
}

void Circle::Print() {

	std::cout << "information of the circle.";
	std::cout << std::endl << "The Circle is centered at:" << std::setw(3) << "(" << getxCoord() << ", " << getyCoord() << ").";
	std::cout << std::endl << "The Radius is:" << std::setw(10) << getradius();
	std::cout << std::endl;

}

void Circle::operator * (double n) {
	rad = rad * n;
	
};

bool Circle::operator == (const Circle& p2)const {
	
	return ((p2.rad == rad) && (p2.xC == xC) && (p2.yC == yC));
};