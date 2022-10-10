#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <iomanip>

#define _USE_MATH_DEFINES


double rmsValue(double sincosarray[], int n)
{
	int square = 0;
	float mean = 0.0;
	double root = 0.0;

	// Calculate square.
	for (int i = 0; i < n; i++) {
		square += pow(sincosarray[i], 2);
	}

	// Calculate Mean.
	mean = (square / (float)(n));

	// Calculate Root.
	root = sqrt(mean);

	return root;
}

int main() {
	double a, b;
	int samples;
	double data;
	double datasin, datacos;
	double propresult;
	double RMSprop;
	int i;
	double sincosarray[16];
	std::ifstream sindatain;
	sindatain.open("sine.v");
	if (sindatain.fail()) {
		std::cout << "File cannot be opened";
		exit(1);
	}
	std::ifstream cosdatain;
	cosdatain.open("cosine.v");
	if (cosdatain.fail()) {
		std::cout << "File cannot be opened";
		exit(1);
	}
	std::ofstream result;
	result.open("result.v");
	if (result.fail()) {
		std::cout << "File cannot be opened";
		exit(1);
	}

	std::cout << "Enter the number of data samples are to be taken:";
	std::cin >> samples;

	//just writing the data
	//sin data handling
	result << "Sin(t) values:" << std::endl;
	for (i = 0; i != samples; i++) {
		sindatain >> data;

		result << std::setprecision(2) << sin(data) << " , "; \


	}
	result << std::endl << std::endl;
	//cos data handling
	result << "Cos(t) values:" << std::endl;
	for (i = 0; i != samples; i++) {
		cosdatain >> data;

		result << std::setprecision(2) << cos(data) << " , ";

	}

	cosdatain.close();
	sindatain.close();


	sindatain.open("sine.v");
	if (sindatain.fail()) {
		std::cout << "File cannot be opened";
		exit(1);
	}
	cosdatain.open("cosine.v");
	if (cosdatain.fail()) {
		std::cout << "File cannot be opened";
		exit(1);
	}


	result << std::endl << std::endl << "Sin^2(t) & Cos^2(t) property calculations: " << std::endl;
	//completing the t property calculations and saving in the array 
	for (i = 0; i != samples; i++) {

		sindatain >> datasin;
		cosdatain >> datacos;

		double propresult = (pow(sin(datasin), 2)) + (pow(cos(datacos), 2));
		result << std::setprecision(30) << propresult << " , ";

		sincosarray[i] = propresult;

	}

	

	//root means squared error for each element calculated.
	RMSprop = rmsValue(sincosarray, samples);

	// 
	std::cout << "Root Means Squared ERROR of all values cacluated from sin2t + cos2t : ";
	std::cout   << std::setprecision(40) << ((RMSprop - 1) / 1);
}
