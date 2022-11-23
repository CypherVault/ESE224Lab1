#pragma once

class Circle
{

private:
	double yC;
	double xC;
	double rad;
	
	

public:
	Circle();
	Circle(double x, double y, double r);
	double getxCoord();
	double getyCoord();
	double getradius();
	void operator * (double n); 
	bool operator ==(const Circle& p2 )const;
	void Print();
};
