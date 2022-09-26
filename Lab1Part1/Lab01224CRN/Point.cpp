#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include "Point.h"
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

	return 0;
}