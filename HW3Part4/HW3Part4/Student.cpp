#include <iostream>
#include <string> 
#include "Student.h"

using namespace std;

Student::Student(std::string f, std::string l, int i) {
first_name = f; last_name = l; ID = i;

}

std::string Student::get_ln() {
	return last_name;
}

std::string Student::get_fn() {
	return first_name;
}

int Student::get_id() {
	return ID;
}
