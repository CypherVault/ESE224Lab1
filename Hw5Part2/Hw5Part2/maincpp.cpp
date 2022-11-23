#include<iostream>
#include <string>
using namespace std;

class person {
protected:
	std::string name;
public:

};

class student : public person {
private:
	double gpa;
	bool outstand = false;

public:

	student() {
		std::cout << "Enter Student Last name: \n";
		std::cin >> name;
		std::cout << "Enter GPA: \n";
		std::cin >> gpa;
		if (gpa >= 3.5)
			outstand = true;
	}

	void out() {
		if (outstand) {
			std::cout << "\nThis person is outstanding. \n";
		}
	}

	void display() {
		std::cout << "Name is: " << name << "\n";
		if (outstand) {
			std::cout << "\nThis person is outstanding. \n";
		}

	}
};

class prof : public person {
private:
	int numpub;
	bool outstand = false;

public:
	prof() {
		std::cout << "Enter Professor Last name : \n";
		std::cin >> name;
		std::cout << "Enter number of published works: \n";
		std::cin >> numpub;

		if (numpub > 20) {
			outstand = true;
		}

	}
	void out() {
		if (outstand) {
			std::cout << "\nThis person is outstanding. \n";
		}
	}
	void display() {

		std::cout << "Name is: " << name << "\n";
		if (outstand) {
			std::cout << "\nThis person is outstanding. \n";
		}


	}

};

int main() {
	student s1;
	student s2;
	student s3;
	prof p1;
	prof p2;
	prof p3;

	s1.display();
	s2.display();
	s3.display();
	p1.display();
	p2.display();
	p3.display();



}