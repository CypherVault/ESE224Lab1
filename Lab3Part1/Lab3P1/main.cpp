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

	int entries;
	double w, h;
	int loopset = 5;
	string p;
	string l = "";


	fstream fin;
	fin.open("input.dat");  // open part 1 input file
	if (fin.fail()) {
		std::cerr << "Error opening input file!" << std::endl;
		return 1;
	}


	fstream file;
	file.open("part1out.v", ios_base::out);  // open part 1 output file
	if (file.fail()) {
		std::cerr << "Error opening output file!" << std::endl;
		return 1;
	}

	while (!fin.eof()) { 
		fin >> p;
		l = l + p;
	}

	cout << l;

	file.write(l.data(), l.size());

	file.close();

	return 0;

}
