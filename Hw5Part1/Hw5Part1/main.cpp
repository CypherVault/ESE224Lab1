#include<iostream>
#include <string>
using namespace std;


class employee {
protected:
std::string Last;
int id;
public:   

};

class Student {
protected:
std::string uni;
std::string deg;
public:

};

class laborer: public employee {
private :

public:
laborer() {
	std::cout << "Enter Laborer Last Name: \n";
	std::cin >> Last;
	std::cout << "Enter Laborer ID: \n";
	std::cin >> id;

}
void display() {
	std::cout << "\nData for Laborer:\n" << "Last name: " << Last << "\n" << "Number: " << id << "\n";

}

};

class scientist: public Student , public employee {
int numpub;
std::string uni;
std::string deg;
   
public:
scientist() {
	std::cout << "Enter Scientist last name: \n";
	std::cin >> Last;
	std::cout << "Enter Scientist ID: \n";
	std::cin >> id;
	std::cout << "Enter Scientist's number of published books:\n";
	std::cin >> numpub;
	std::cout << "Enter Scientist's attended University:\n";
	std::cin >> uni;
	std::cout << "Enter Scientist's highest acheived degree:\n";
	std::cin >> deg;


}
void display() {

	std::cout << "\nData for Scientist:\n" << "Last name: " << Last << "\n" << "Number: " << id << "\n" << "Number of Published Works: " << numpub << "\n" << "Place of Study: " << uni << "\n" << "Degree Achieved: " << deg << "\n";

}

};


class manager : public Student, public employee {
private:
	std::string title;
	int dues;
	std::string deg;
	std::string uni;
public:
	manager() {
		std::cout << "Enter Manager last name: \n";
		std::cin >> Last;
		std::cout << "Enter Manager ID: \n";
		std::cin >> id;
		std::cout << "Enter Manager title: \n";
		std::cin >> title;
		std::cout << "Enter Manager golf dues: \n";
		std::cin >> dues;
		std::cout << "Enter Manager attended University: \n";
		std::cin >> uni;
		std::cout << "Enter Manager's highest acheived degree: \n";
		std::cin >> deg;



	}
	void display() {

		std::cout << "\nData for Manager:\n" << "Last name: " << Last << "\n" << "Number: " << id << "\n" << "Title: " << title << "\n" << "Dues: " << dues << "\n"  "Place of Study: " << uni << "\n" << "Degree Achieved: " << deg << "\n";

	}

};





int main() {
manager m;

scientist s;

laborer l;

m.display();

s.display();

l.display();






}
