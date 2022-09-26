#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "Rectangle.h"

using namespace std;

int main() {

	Rectangle p1(2.5, 2.6, 3.986, 4.45596); // confuguring a rectangle with user defined numbers, 
	Rectangle p2 = Rectangle();

	cout << "Area of default Rectangle 2 : " << p2.getArea() << endl;
	p2.mirrorX();
	cout << "Coordinates after being mirrored over X axis: (" << p2.getXCoord() << "," << p2.getYCoord() << "," << p2.getWidth() << "," << p2.getHeight() << ")." << endl;

	p2.mirrorY();
	cout << "Coordinates after being mirrored over Y axis (" << p2.getXCoord() << "," << p2.getYCoord() << "," << p2.getWidth() << "," << p2.getHeight() << ")." << endl;

	p2.mirrorOrigin();
	cout << "Coordinates after being mirrored over origin (" << p2.getXCoord() << "," << p2.getYCoord() << "," << p2.getWidth() << "," << p2.getHeight() << ")." << endl;


	cout << "Area of user created Rectangle: " << p1.getArea() << endl;
	p1.mirrorX();
	cout << "Coordinates after being mirrored over X axis: (" << p1.getXCoord() << "," << p1.getYCoord() << "," << p1.getWidth() << "," << p1.getHeight() << ")." << endl;

	p1.mirrorY();
	cout << "Coordinates after being mirrored over Y axis (" << p1.getXCoord() << "," << p1.getYCoord() << "," << p1.getWidth() << "," << p1.getHeight() << ")." << endl;

	p1.mirrorOrigin();
	cout << "Coordinates after being mirrored over origin (" << p1.getXCoord() << "," << p1.getYCoord() << "," << p1.getWidth() << "," << p1.getHeight() << ")." << endl;

	cout << "Return true if the area of the rectangle is true :" << (p1 > p2) << endl;
	cout << "The difference in area between: the two rectangles:" << fabs(p1 - p2) << endl;
	p1.Print();

	return 0;
}
