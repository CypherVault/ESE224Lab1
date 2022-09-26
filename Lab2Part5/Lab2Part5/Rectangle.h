#pragma once

class Rectangle
{
private:
	double xCoord, yCoord, width, height;

public:
	Rectangle();
	Rectangle(double x, double y, double w, double h);
	double getXCoord();
	double getYCoord();
	double getWidth();
	double getHeight();

};
class Line {

private: 
	double slope, intercept;
public: 
	Line();
	Line(double k, double b);
	double getSlope();
	double getIntercept();
	void print();
	bool operator ==(Line) const;
	void operator *(double num);
	void operator +(double num);

};


class Intersect {
private:
	bool tempY, tempX, startY, endY, i = 1;
	bool intersecting; 
public:
	Intersect();
	bool intersectTrue(Rectangle r, Line l);
};



