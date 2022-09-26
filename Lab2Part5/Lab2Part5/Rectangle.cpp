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


Line::Line()
{
	slope = 5;
	intercept = 2;

};

Line::Line(double k, double b)
{

	slope = k;
	intercept = b;

}

double Line::getSlope() {
	return slope;
}

double Line::getIntercept() {
	return intercept;
}

void Line::print() {

	std::cout << std::setprecision(3) << "the line is y =" << std::setw(5) << slope << " * x +" << std::setw(10) << intercept << std::endl;
}

bool Line::operator ==(Line l2) const {

	return ((l2.slope == slope) && (l2.intercept == intercept));

}

void Line::operator+(double num) {
	std::cout << "intercept before addition " << slope;
	slope = slope + num;
	std::cout << "intercept after addition " << slope;
}

void Line::operator*(double num) {
	std::cout << "slope before multiplication " << slope;
	slope = slope * num;
	std::cout << "slope after multiplication " << slope;
}

Intersect::Intersect() {
	intersecting = 0;
}

bool Intersect::intersectTrue(Rectangle r, Line l)
{
	tempX = r.getXCoord();

	while (i <= (r.getXCoord() + r.getWidth())) {
		tempY = l.getSlope() * r.getWidth();

		if ((r.getYCoord() <= tempY) && (tempY <= r.getHeight()))
		{
			i = r.getXCoord() + r.getWidth();
			return 1;

		};

		tempX += 1;
		i += 1;

	}
	return 0;
}


