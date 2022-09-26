#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include "Point.h"
//using namespace std;

Point::Point() {
	xCoord = 5;
	yCoord = 5;
}
Point::Point(double x, double y) {
	xCoord = x;
	yCoord = y;
}
double Point::getX() {
	return xCoord;
}
double Point::getY() {
	return yCoord;
}
void Point::setX(double x) {
	xCoord = x;
}
void Point::setY(double y) {
	yCoord = y;
}
double Point::dist2origin() {
	double a;
	a = 2 * sqrt(pow(xCoord, 2) + pow(yCoord, 2));
	return a;
}

double Point::Distance(const Point& p2) const
{
	double dx = p2.xCoord - xCoord;
	double dy = p2.yCoord - xCoord;
	return sqrt(pow(dx, 2) + pow(dy, 2));
}

double Point::operator -(const Point& p2) const
{
	double dx = p2.xCoord - xCoord;
	double dy = p2.yCoord - xCoord;
	return sqrt(pow(dx, 2) + pow(dy, 2));
}


bool Point::Equal(const Point& p2) const
{
	return (p2.xCoord == xCoord) && (p2.yCoord == yCoord);


}


bool Point::operator ==(const Point& p2) const
{
	return (p2.xCoord == xCoord) && (p2.yCoord == yCoord);


}

void Point::Print()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(3);
	std::cout << "The point is (" << xCoord << "," << yCoord << ")" << std::endl;

} 
