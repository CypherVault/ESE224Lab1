#pragma once
#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
	 

class Water
{

private:
	double current;
	double greatest;
	double least;
	double average;


public:

	Water();
	Water(double current);
	double getCurrent();
	double getGreatest();
	double getLeast();
	double getAverage();
	void setCurrent(double c);
	void cycle();


};