#pragma once
#include <string>
#include <fstream>
using namespace std;

class List {
private:
	string file_name;
	int amount;
	fstream myFile; 
	string most_expen;
	string name;
	double price;
	double max_price;
	string array[20][2];
	float pricearray[10];
	string sortedarray[20][2];

public: 
	List();
	void updateinternal();
	void fileOpen();
	void itemExists(std::string n);
	void addItem(std::string n, double p);
	void print_most_expen();
	void printAll();
	void printTranspose();
	void priceSort();
};