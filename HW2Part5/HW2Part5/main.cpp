#include <iostream>
#include <fstream>
using namespace std;

std::string checkPalin(std::string str1, std::string str2) {
    std::string str3 = " ";
    int i = 0;

    if (str1 == str2) {
        i = 1;
    }


    if (i) {
        return str1;
    }
    else {
        return str3;
    }

}

// reverse the string
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


int main()
{

    std::string str1, str2;

    std::ifstream input;
    input.open("input.v");
    if (input.fail()) {
        std::cout << "File cannot be opened";
        exit(1);
    }

    std::ofstream output;
    output.open("newfile.v");
    if (output.fail()) {
        std::cout << "File cannot be opened";
        exit(1);
    }

    while (!input.eof()) {

        input >> str1;
        str2 = str1;
        reverseStr(str2);
        output << checkPalin(str1, str2) << std::endl;

    }


    return 0;
}