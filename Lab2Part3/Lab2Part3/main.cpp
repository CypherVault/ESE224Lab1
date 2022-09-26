#include <iostream>
#include <math.h> 
#include "Line.h"

using namespace std;

int main() {

	double x, y, w, h, k, b;
	bool intersect;
	Intersect i1;
	cout << "Enter rectangle parameters (x, y, w, h): ";
	cin >> x >> y >> w >> h;
	Rectangle r(x, y, w, h);
	cout << "Enter line parameters (k, b): ";
	cin >> k >> b;
	Line l1(k, b);
	intersect = i1.intersectTrue(r, l1);
	cout << "Is the rectangle and line intersect? " << intersect << endl;
	system("pause");
	return 0;



	return 0;
}
