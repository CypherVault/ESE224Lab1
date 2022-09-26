#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include "Water.h"

Water::Water() {

	current = -1;
	greatest = -1;
	least = -1;
	average = -1;

};

Water::Water(double c) {

	current = c;
	greatest = c;
	least = c;
	average = c;
};

double Water::getCurrent() {
	return current;
};

double Water::getGreatest() {

	return greatest;
}

double Water::getLeast() {

	return least;
}

double Water::getAverage() {

	return average;
}

void Water::setCurrent(double c) {

	current = c;
};

void Water::cycle() {
	if (current > greatest) {
		greatest = current;
	}

	if (current < least) {
		least = current;
	}

	average = ((average + current) / 2);

	std::cout << "Current : " << current << std::endl;
	std::cout << "Greatest : " << greatest << std::endl;
	std::cout << "Least : " << least << std::endl;
	std::cout << "Average : " << average << std::endl;
}
