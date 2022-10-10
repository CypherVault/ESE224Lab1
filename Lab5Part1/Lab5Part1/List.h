#pragma once
#include <string>
#include <fstream>
using namespace std;

class List {
private:
	string file_name;
	fstream myFile; 
	string most_expen;
	string name;
	double price;
	double max_price;
	string array[30][2];
	string sortedarray[30][2];

public: 
	List();
	void fileOpen();
	void itemExists(std::string n);
	void addItem(std::string n, double p);
	void print_most_expen();
	void printAll();
	void printTranspose();
	void priceSort();
};