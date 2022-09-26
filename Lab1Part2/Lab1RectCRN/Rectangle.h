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
	void mirrorX();
	void mirrorY();
	void mirrorOrigin();


};