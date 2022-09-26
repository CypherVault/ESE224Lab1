#pragma once
#include <string>


class Books

{
private:
	int bookNum;
	std::string bookTitle;
	std::string bookAuthor;
	std::string bookGenre;
	int bookPages;

public:

	Books();
	Books(int b, std::string t, std::string a, std::string g, int p);
	void operator ==(const Books& b2);
	void Print();

};