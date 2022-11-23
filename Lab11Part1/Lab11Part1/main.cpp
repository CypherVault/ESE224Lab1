#include<iostream>
#include <string>
using namespace std;

class CEAS {
protected:
	
public:
	void dispinfo() {
		cout << "CEAS students need...\n";
	};
	void reqs() {
		cout << "Req1: Completion of at least 120 credit hours of passing work.\nReq2: A minimum cumulative GPA of 2.00\n";
	};
	virtual void printcores() {
	};
};

class ESE : public CEAS{
protected:

public:
	void printcores() {

		cout << "ESE Core1: Electromagnetic and Transmission Line Theory\nESE Core2: Control System\nESE Core3: Advanced Electronic Laboratory\n";
	};

};

class ECE : public CEAS {
protected:

public:
	void printcores() {

		cout << "ESE Core1: Computer Architecure\nESE Core2: Real-Time OS\nESE Core3: VHDL\n";
	}
	};

void dispInfo(CEAS* student) {
	student->dispinfo();
}

void printRequirements(CEAS* student) {
	student->printcores();
}

void reqs(CEAS* student) {
	student->reqs();
};

int main() {

	CEAS* ceas = new CEAS;
	ESE* ese = new ESE;
	ECE* ece = new ECE;

	dispInfo(ceas);
	reqs(ceas);
	printRequirements(ceas);
	

	dispInfo(ese);
	reqs(ese);
	printRequirements(ese);
	

	dispInfo(ece);
	reqs(ece);
	printRequirements(ece);
	
};