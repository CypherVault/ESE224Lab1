#pragma once
#include <string>
#include <iostream>

class Student {


private:
	std::string	last_name;
		std::string first_name;
		int ID;
public:
	Student(std::string f,std::string l, int i );
	std::string get_ln();
	std::string get_fn();
	int get_id();

};