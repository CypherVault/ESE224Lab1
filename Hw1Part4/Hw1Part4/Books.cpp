#include <iostream>
#include "Books.h"
#include <iomanip>

Books::Books() {
	
	bookNum = 1;
	bookTitle = "the book";
	bookAuthor = " Harold Prime";
	bookGenre = "Cooking Romance";
	bookPages = 10;

 }

Books::Books(int n, std::string t, std::string a, std::string g, int p) {

	bookNum = n;
	bookTitle = t;
	bookAuthor = a;
	bookGenre = g;
	bookPages = p;

}

void Books::operator==(const Books& b2) {
	bookNum = b2.bookNum;
	bookTitle = b2.bookTitle;
	bookAuthor = b2.bookAuthor;
	bookGenre = b2.bookGenre;
	bookPages = b2.bookPages;
}

void Books::Print() {


	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Book number:" << std::setw(5) << bookNum << std::endl;
	std::cout << "Book Title:" << std::setw(5) << bookTitle << std::endl;
	std::cout << "Book Author:" << std::setw(5) << bookAuthor << std::endl;
	std::cout << "Book Genre:" << std::setw(5) << bookGenre << std::endl;
	std::cout << "Book Pages:" << std::setw(5) << bookPages << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}