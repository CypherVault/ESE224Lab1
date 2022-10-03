#include <iostream>
#include <fstream>

using namespace std;

void fakeswap(double& a, double& b) 
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {

	double a, b;

	ifstream datain;
	datain.open("input.dat");
	if (datain.fail()) {

		cerr << "File cannot be opened";
		exit(1);

	}

	ofstream dataout;
	dataout.open("output.dat");
	if (dataout.fail()) {

		cerr << "File cannot be opened";
		exit(1);

	}

	double swap();

	while (!datain.eof()) {

		datain >> a >> b;
		fakeswap(a, b);
		dataout << a << b << endl;
	}

}