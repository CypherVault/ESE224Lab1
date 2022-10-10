#include <iostream>
using namespace std;


void printstraight(long long int n) {


 int t1 = 0, t2 = 1, nextTerm = 0;
	cout << 0 << " , " << 1 << " , ";
	for (int i = 1; i <= n; ++i) {
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		cout << nextTerm << ", ";

	}
}

void printrighttri(int rows, long long int n) {
	long long int top = n;
		long long int f1 = 0, f2 = 1, nextnum = 0;

	
	int maximumprint = 0;
	int p = 0;
	

	while (nextnum <= top) {
		for (p = 0; p != maximumprint; p++) {
			cout << nextnum << " , ";
			f1 = f2;
			f2 = nextnum;
			nextnum = f1 + f2;
		}
		cout << endl;
		maximumprint++;

	}

};

void printinvertedrighttri(int rows, long long int n) {
	long long int top = n;
	long long int f1 = 0, f2 = 1, nextnum = 0;


	int maximumprint = 7;
	int p = 0;


	while (nextnum <= top) {
		for (p = 0; p <= maximumprint; p++) {
			cout << nextnum << " , ";
			f1 = f2;
			f2 = nextnum;
			nextnum = f1 + f2;
		}
		cout << endl;
		maximumprint--;
	}

};

int main() {
	long long int n, f1 = 0, f2 = 1, nextnum = 0;
	int fcount = 2;
	int f;
	int rowcount;
	cout << "Enter the ceilig of the value we'd like to reach. (99999999999) works.";
	cin >> n;
	cout << "Enter the amount of the value we'd like to reach. (anything over 200 is bad) works.";
	cin >> f;
	cout << "Enter the amount of rows to be printed in your triangles.";
	cin >> rowcount;
	cout << "Fibonacci Series: ";
	nextnum = f1 + f2;

	cout << "straight line:" << endl;
	printstraight(f);
	cout << endl;
	
	cout << " right tri: " << endl;
printrighttri(rowcount,n);
cout << endl;

cout << "inverted: " << endl;
printinvertedrighttri(rowcount, n);
cout << endl;
	return 0;
}