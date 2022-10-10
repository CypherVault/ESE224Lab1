#include <iostream>
#include <fstream>
#include <string> 
#include "List.h"

using namespace std;

void controlPanel(List&);

int main() {
	
	List list1;



	int r = 0;
	controlPanel(list1);
	cout << "\nExiting the program..." << endl;
	return 0;
}

void controlPanel(List& list1) {
	
	double p;
	string str;
	
	char expression = 'a';
	

	while (expression != 'q') {

		cout << "\n(a) - add an item and its price" << endl;
		cout << "(e) - print the most expensive item in the list" << endl;
		cout << "(i) - check to see if this item exists" << endl;
		cout << "(p) - print all items and its price" << endl;
		cout << "(q) - quit the program" << endl;
		cout << "(s) - print in price decending order" << endl;
		cout << "(t) - print transposed form" << endl;
		cout << "(r) - update internal storage" << endl;
		cout << "\nPlease select an option: ";
		
		cout << "enter a command";
		cin >> expression;
			
				switch (expression) {
		case 'a':
			cout << "\nEnter item name and its price: ";
			cin >> str; 
			cout << ","; 
			cin >> p;
			list1.addItem(str, p);
			break;
		case 'i':
			cout << "\nEnter the item name: ";
			cin >> str;
			list1.itemExists(str);
			break;
		case 'e':
			list1.print_most_expen();
			break;
		case 'p':
			list1.printAll();
			break;
		case 't':
			list1.printTranspose();
			break;
		case 's':
			list1.priceSort();
			break;
		}

	}
		
	
	}
	
	

