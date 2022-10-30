#include <iostream>
using namespace std;

int main() {

	int candies[5]{ 3, 1, 9 , 2 , 1};
	int sum = 0;
	int holdcandy;
	int size;
	size = sizeof(candies) / sizeof(int);

	cout << "candies array: [";

	for (int i = 0; i < size; i++) {

		cout << candies[i] << ","; 

	}
	
	cout << "]";



	for (int i = 0; i < size; i++) {
		holdcandy = candies[i];

		if (holdcandy % 2 == 0) {
			sum = sum + (holdcandy / 2);
		}
		else {
			sum = sum + ((holdcandy + 1) / 2);
		}



	}


	cout << endl << "Output : " << sum;



	}






