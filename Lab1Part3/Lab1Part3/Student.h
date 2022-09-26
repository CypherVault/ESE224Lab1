#pragma once

class Student
{

private:

	int ID;
	std::string name;
	std::string major;
	std::string email;

public:
	Student();
	Student(int ID, std::string name, std::string major, std::string email);
	int getID();
	std::string getName();
	std::string getMajor();
	std::string getEmail();
	void changeID(int id);
	void changeMajor(std::string Name);
	void changeEmail(std::string Email);
	void changeName(std::string Major);
	void printInfo(); 
};