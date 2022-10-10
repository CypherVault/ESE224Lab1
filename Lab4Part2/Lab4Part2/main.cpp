
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main() {
	std::string c = "o";
    std::string str;
    std::string q = "q";
    std::string s1 = "hElloO";

 
    std::cout << "Enter a q if you ever wish to exit. Enter a string of characters or a word(s)" << std::endl;
    std::getline(std::cin, str);
    while ((str) != q) {


        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        std::cout << str << std::endl;
         

        std::cout << "Enter a string of characters or a word(s)" << std::endl;
        std::getline(std::cin, str);

    }

    return 0;
}