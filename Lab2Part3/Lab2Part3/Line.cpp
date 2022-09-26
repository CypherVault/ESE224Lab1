#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "Line.h"


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

Line::Line() {

	slope = 1.567;
	intercept = 5.8;

}

Line::Line(double k, double b) {

	slope = k;
	intercept = b;

}

double Line::getSlope() {
	return slope;

};

double Line::getIntercept() {
	return intercept;

};

bool  Line::operator ==(const Line& l2) const {
	return ((l2.slope == slope) && (l2.intercept == intercept));

};

void  Line::operator *(double num) {
	slope = slope * num;
	std::cout << "new slope is:" << slope;
};

void  Line::operator +(double num) {
	intercept = intercept + num;
	std::cout << "new intercept is:" << intercept;
};


Intersect::Intersect() {
	intersecting = 0;
}

bool Intersect::intersectTrue(Rectangle r, Line l)
{
	temp = r.getXCoord();

	while (i <= (r.getXCoord() + r.getWidth())) {
		tempY = l.getSlope() * r.getWidth();
		//looping through until it can PROVE it finds it in the range. Just iterate through the lines values untilit fits in te range 
		if ((r.getYCoord() <= tempY) && (tempY <= r.getHeight()))
		{
			i = r.getXCoord() + r.getWidth();
			return 1;

		};

		temp += 1;
		i += 1;

	}
	return 0;
}

