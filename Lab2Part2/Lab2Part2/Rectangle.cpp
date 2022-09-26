#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "Rectangle.h"

Rectangle::Rectangle() {
	xCoord = 1;
	yCoord = 1;
	width = 1;
	height = 1;
};

Rectangle::Rectangle(double x, double y, double w, double h) {
	xCoord = x;
	yCoord = y;
	width = w;
	height = h;
};

double Rectangle::getXCoord() {
	return xCoord;
};


double Rectangle::getYCoord() {
	return yCoord;
};


double Rectangle::getWidth() {
	return width;
};


double Rectangle::getHeight() {
	return height;
};

double Rectangle::getArea() {
	double a;
	a = width * height;
	return a;

};

void Rectangle::mirrorX() {

	yCoord = yCoord * -1;
};

void Rectangle::mirrorY() {

	xCoord = xCoord * -1;

};

void Rectangle::mirrorOrigin() {
	yCoord = yCoord * -1;
	xCoord = xCoord * -1;
};

bool Rectangle::operator > (const Rectangle& p2) const
{
	return ((p2.width * p2.height) > (width * height));


}


double Rectangle::operator - (const Rectangle& p2) const
{
	return   abs(((p2.width * p2.height) - (width * height)));

}


void Rectangle::Print() {

	
	
	std::cout << "The origin is (" << xCoord << "," << std::setw(5) << yCoord << ")" << std::endl;
	
	
	std::cout << "The width is " << std::setprecision(3) << width;
	
	std::cout << std::setw(25) << "and the height is "  << height  << std::endl;

}
