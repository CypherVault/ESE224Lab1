#include <iostream>
#include <math.h> 
#include "Point.h"

using namespace std;

int main() {
	Point p1;
	Point p2(3.4, 2.1);  // constructs the default AND hardcoded new one 
	double a, b, x, y;

	// some variables for use in reading inputs

	cout << "euclidian distance from the origin of pair 1 (" << p1.getX() << "," << p1.getY() << ") is:";
	cout << p1.dist2origin() << endl;


	cout << "euclidian distance from the origin of pair 2 (" << p2.getX() << "," << p2.getY() << ") is:";       // this prints the coordinates and eucliian distance of each pair seperately
	cout << p2.dist2origin();
	cout << "enter new coordinates for pair 2: " << endl << endl;
	cout << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;// reads input from user to overwrite the old pair 2 of coordinates 

	p2.setX(x);// sets them 
	p2.setY(y);
	cout << "euclidian distance from the origin of pair (" << p2.getX() << "," << p2.getY() << ") is:";
	cout << p2.dist2origin();
	// prints new info aftet changes 

	return (0);
}