#include <iostream>

#include <math.h>

int nresult(int n) {



	
	int temp1;
		int temp2;


	if ((n % 2) == 1) {
		temp1 = 0;
	}
	else {
		temp1 = 1;
	}

	if ((n % 1) == 1) {
		temp2 = 0;
	}
	else {
		temp2 = 1;
	}


	return (temp1 + temp2);


}


int main() {


	int n;
	int ncopy;
	int c = 1;
	
	std::cout << "Enter the char E if you ever wish to exit.";

	while (c) {
		

		std::cout << "Enter number of stairs:";
		std::cin >> n;
		c = n;
		if (c == 900) {
			c = 0;
			exit(1);
		}


		std::cout << "The amount of ways to reach the top of " << n << " stairs." << nresult(n) << std::endl;

	}
	


	return 0;
}