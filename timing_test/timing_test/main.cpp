#include <ctime>
#include <iostream>




void menu() {

	double last_event_time = 0.00;
	double this_event_time = 0.00;
	int days_passed = 0;
	int days_due = 900;
	char c;
	
	while (1) {
		
		
		std::cout << "press c AND ENTER (simulate menu choice) ";
		std::cin >> c;
		this_event_time = clock();
		days_passed = (int)(((std::fabs(last_event_time - this_event_time)) / 1000) / 5);
		std::cout << "Days passed: " << days_passed << std::endl;
		last_event_time = this_event_time;
		days_due = days_due - days_passed;

		//mingi code: use this code below to pass in what you need
		//books.duein(days_passed);
		std::cout << std::endl <<  "days remaining: " << days_due << std::endl;
		

	}


}



int main() {
	double last_event_time = 0.00;
		menu();

}