#include <iostream>
#include <string.h>
#include <iomanip>


void Student::update_day(int day) {
	for (UserData data : database) {
		for (BookAndDue book : data.borrowed_books) {
			book.due -= day;
		}
	}
}

//renews to just 7 days
void Student::renew() {
	for (UserData data : database) {
		for (BookAndDue book : data.borrowed_books) {
			book.due = 7;
		}
	}
}

int menu_print_control(){  
	
	char expression = 'a';
	//library ascii art goes here


	double last_event_time = 0.00;
	double this_event_time = 0.00;
	int days_passed = 0;
	int days_due = 900;
	char c;

	while (expression != '0') {


		//std::cout << "press c AND ENTER (simulate menu choice) ";
		//std::cin >> c;
		this_event_time = clock();
		days_passed = (int)(((std::fabs(last_event_time - this_event_time)) / 1000) / 5);
		//std::cout << "Days passed: " << days_passed << std::endl;
		last_event_time = this_event_time;
		days_due = days_due - days_passed;
		Student::update_day(days_passed);
		Teacher::update_day(days_passed);
		Library::update_day(days_passed); 

		//mingi code: use this code below to pass in what you need
		//books.duein(days_passed);
		//std::cout << std::endl << "days remaining: " << days_due << std::endl;
		
		//pass days_passed into mingis timing fucntion

	
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << "~     " << "Library Options" << std::setw(8) << " ~" << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << "(1) - Search Book" << std::endl; 
		std::cout << "(2) - Borrow Book" << std::endl; 
		std::cout << "(3) - Return Book" << std::endl; 
		std::cout << "(4) - Renew Book" << std::endl; 
		std::cout << "(5) - Request Book" << std::endl; // TEACHER ONLY
		std::cout << "(6) - Remove Book" << std::endl; //TEACHER ONLY
		std::cout << "(0) - Log Out " << std::endl; 
		std::cout << "\nPlease select an option. ";
		std::cout << std::endl << "Enter a command: ";
		std::cin >> expression;

		switch (expression) {
		case '1':

			std::cout << "1";


			break;
		case '2':
			std::cout << "2";

			break;
		case '3':

			std::cout << "3";
			break;
		case '4':

			std::cout << "4";
			break;
		case '5':

			std::cout << "5";
			break;
		case '6':

			std::cout << "6";
			break;
		case '0':


			break;

		}
	}
	return 0;
}



int main() {
    std::string LoggedinUser;
	std::string Password;
	std::string usr;
	std::string pas;
	int stAuth;
	int teAuth;
	int cont = 1;
enter:
	std::cout << "enter the user name and password:" << std::endl;
	std::cin >> usr;
	std::cout << std::endl;
	std::cin >> pas;

	//menu_print_control(auth,usr);
	stAuth = Student.auth(usr, pas);
	teAuth = Teacher.auth(usr, pas);
	
	if (stAuth && !teAuth) {


		while (menu(Student s1)) {

		}
		goto enter;

	}

	else if (!stAuth && teAuth) {

		while (menu(Teacher t1)) {

		}
		goto enter;

	}
	else {
		goto enter;
	}


}
