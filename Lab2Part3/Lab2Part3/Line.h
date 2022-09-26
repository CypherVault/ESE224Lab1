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
	double getArea();
	


};



class Line
{
private:
	double slope, intercept;

public:
	Line();
	Line(double k, double b);
	double getSlope();
	double getIntercept();
	bool  operator ==(const Line& l2) const;
	void  operator *(double num);
	void  operator +(double num);

};

class Intersect {
private:
	bool tempY, temp, startY, endY, i = 1;
	bool intersecting;
public:
	Intersect();
	bool intersectTrue(Rectangle r, Line l);
};
