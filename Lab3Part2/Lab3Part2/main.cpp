#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ostream>
#include <istream>
using namespace std;


int main() {

	int num;
	int i = 0;
	double w, h;
	int loopset = 5;
	string p;
	string l = "";
	double greatestArea;
	double savedgreatw;
	double savedgreath;
	double minimumArea;
	double savedlessw;
	double savedlessh;
	double averageAreaRect = 0;
	double averageAreaSqaure = 0;
	int squarecounter = 0;
	int rectcounter = 0;


	fstream fin;
	fin.open("data1.dat");  // open part 1 input file
	if (fin.fail()) {
		std::cerr << "Error opening input file!" << std::endl;
		return 1;
	}


	fstream file;
	file.open("part2report.v", ios_base::out);  // open part 1 output file
	if (file.fail()) {
		std::cerr << "Error opening output file!" << std::endl;
		return 1;
	}

	
	fin >> num;  // read first line  get iteration control
	fin >> w >> h;
	greatestArea = w * h;
	savedgreath = h;
	savedgreatw = w;
	minimumArea = w * h;
	savedlessh = h;
	savedlessw = w;
	
	if (w == h) {
		averageAreaSqaure = (w*h);
		squarecounter = 1;
		averageAreaRect = (w * h);
		rectcounter = 1;
	}
	else if (w != h) {
		averageAreaRect = w * h;
		rectcounter = 1;
	}
	
	for (i; i != num-1; i++) {


		cout << rectcounter;
		
		fin >> w >> h;

		if (w == h) {
			squarecounter++;
			rectcounter++;
			averageAreaSqaure = ((w * h) + averageAreaSqaure) / 2;
			averageAreaRect = (averageAreaSqaure + averageAreaRect) / 2;
		}
		else if ( w != h) {
			rectcounter++;
			averageAreaRect = ( (w * h) + averageAreaRect) / 2;
			}

		if ((w * h) > greatestArea) {
			greatestArea = w * h;
			savedgreath = h;
			savedgreatw = w;
		}

		if ((w * h) < minimumArea) {
			minimumArea = w * h;
			savedlessh = h;
			savedlessw = w;
		}
			
cout << rectcounter;
	}

	file << "Maximum Area:" << greatestArea << endl << 
		"( W:" << savedgreatw << "H: " << savedgreath << 
		")" << endl << "Minimum Area:" << minimumArea << endl 
		<< "( W:" << savedlessw << "H: " << savedlessh << ")" 
		<< endl << "Average Area for Sqaures: " << averageAreaSqaure 
		<< endl << "Average Area for rectangles:" << averageAreaRect 
		<< endl;
	

	file.close();

	return 0;

}
