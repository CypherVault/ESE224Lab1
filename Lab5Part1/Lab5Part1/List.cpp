#include "List.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
#include <iomanip>

List::List(){
    string str;
    int i = 0;
    double price;
    std::ifstream myFile;
    myFile.open("itemCatalog.txt");
    if (myFile.fail()) {
        std::cout << "File cannot be opened";
        exit(1);
    }

    while (!myFile.eof()) {
        myFile >> str >> price;
        array[i][0] = str;
        array[i][1] = price;
        i++;
    }

}

void List::fileOpen() {

    string filename;
    ofstream fileC;

    cout << "which file do you want to check?";
    cin >> filename;

    fileC.open(filename.c_str());
    if (fileC.fail()) {
        std::cout << "File cannot be opened";
        
    }
    else {

       file_name = (filename.c_str());
       myFile.open(filename.c_str());
    }

}



void List::printAll(void) {
    string str;
    while (!myFile.eof()) {
            myFile >> str;
            cout << str;
    }

}

void List::itemExists(std::string in) {
    string str;
    string price;
    while (!myFile.eof()) {
        myFile >> str;
        if (str == in) {
            cout << "Item " << str;
            
       }
    }
    cout << "item doesnt exist";

}

void List::print_most_expen() {
    
    string str;
    int indexcurr = 0;
    double price;
    int largestindex1;
    int largestindex2;
    double largestprice;
  
    myFile >> str >> price;

        largestprice = price;
        largestindex1 = 0;
        largestindex2 = 0;
        array[0][0] = str;
        array[0][1] = price;

    while (!myFile.eof()) {
        indexcurr++;
        myFile >> str >> price;
        array[indexcurr][0] = str;
        array[indexcurr][1] = price;

        if (price > largestprice) {

            largestprice = price;
            largestindex1 = indexcurr;
            largestindex2 = indexcurr;
        }
  
    }

    std::cout << "The most expensive item is: " << array[largestindex1][0] << ", and it costs: $" << array[largestindex2][1] << std::endl;

}

void List::addItem(string n, double p) {

    myFile << n << " " << p << endl;

}

bool compareNumbers(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 > n2)
        return true;
    if (n2 > n1)
        return false;

    // If lengths are same
    for (int i = 0; i < n1; i++)
    {
        if (str1[i] > str2[i])
            return true;
        if (str1[i] < str2[i])
            return false;
    }

    return false;
}

void sortLargeNumbers(string arr[], int n)
{
    sort(arr, arr + n, compareNumbers);
}

void List::priceSort() {
    int i;
    string pricearray[30];

    for (i = 0; i <= sizeof(array); i++) {
        pricearray[i] = array[i][1];
    }

    int n = sizeof(pricearray) / sizeof(pricearray[0]);
    sortLargeNumbers(pricearray, n);

 

    //for (i = 0; i <= 30; i++) {
      //  pricearray[i] = array[i][1];
    //}

    string elem;
    int index1 = 0;
        int index2 = 0;

    for (i = 0; i <= 30; i++) {

        elem = array[index1][0];


    int index2 = 0;
    while (index2 < 30)
    {
        if (pricearray[index2] == elem) {
            break;
        }
        index2++;
    }

    sortedarray[index2][0] = array[index1][0];
    sortedarray[index2][1] = array[index1][1];
    
    index1++;

    }


     for (i = 0; i <= 30; i++) {

         std::cout << i << "." << setw(2) << sortedarray[i][0] << setw(8) << "$" << sortedarray[i][1] << std::endl;
        
    }




}

void List::printTranspose() {

    for (int i = 0; i < 30; i++) {

        std::cout << array[i][0] << setw(5);


    }
    cout << endl;

    cout << endl;

    for (int i = 0; i < 30; i++) {

        std::cout << array[i][1] << setw(8);


    }


}


