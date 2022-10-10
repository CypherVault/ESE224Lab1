#include<iostream>
#include<cstdlib>
using namespace std;

void printMenu() {
	cout << "Input a number 1 - 4 to select a random problem or 5 to exit the game." << endl << "1 - Addition" << endl << "2 - Subtraction" << endl << "3 - Multiplication" << endl << "4 - Division" << endl << "5 - Exit";
	cout << endl;
}

int main() {

	int select = 80;
	double guess;
	// Providing a seed value
	srand((unsigned)time(NULL));
	double result;
	// Get a random number.
	
	while (select != 5) {
		int random1 = rand();
		int random2 = rand();
		printMenu();
		cin >> select;	
//arithmetic and stuff
		switch (select) {

		case 1:
			result = random1 + random2;

			cout << endl << random1 << "+" << random2 << endl;
			cout << "Solve, and enter your answer :";
			cin >> guess;
			if (guess == result) {
				cout << "correct!";
			}
			else {
				cout << "wrong...";
			};
			break;

		case 2:
			result = random1 - random2;

			cout << endl << random1 << "-" << random2 << endl;
			cout << "Solve, and enter your answer :";
			cin >> guess;
			if (guess == result) {
				cout << "correct!";
			}
			else {
				cout << "wrong...";
			};
			break;
		case 3: 
			result = random1 * random2;

			cout << endl << random1 << "*" << random2 << endl;
			cout << "Solve, and enter your answer :";
			cin >> guess;
			if (guess == result) {
				cout << "correct!";
			}
			else {
				cout << "wrong...";
			};

			break;

		case 4:
			result = random1 / random2;

			cout << endl << random1 << "/" << random2 << endl;
			cout << "Solve, and enter your answer :";
			cin >> guess;
			if (guess == result) {
				cout << "correct!";
			}
			else {
				cout << "wrong...";
			};

			break;

			case 5:
				return 0;
		}
	}
	return 1;
}