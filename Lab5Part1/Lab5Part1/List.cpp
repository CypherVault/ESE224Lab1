#include "List.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <execution>
#include <iomanip>

List::List(){
    string str;
    int i = 0;
    string price;

   
    fstream myFile;
  

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


    array[i-1][0] = " ";
    array[i-1][1] = " ";

    array[i][0] = " ";
    array[i][1] = " ";

    amount = i;

    
   /* for (i = 0; i <= amount; i++) {

        cout << array[i][0] << " , ";
        cout << array[i][1];

    }

   */
  

    myFile.close();
}

void List::updateinternal() {
    string str;
    string price;
    int i = 0;


    fstream myfile;


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

    array[i][0] = " ";
    array[i][1] = " ";



    array[i - 1][0] = " ";
    array[i - 1][1] = " ";

    myFile.close();

}

void List::fileOpen() {

    string filename;
    fstream fileC;

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



void List::printAll() {
    string str;

  
    updateinternal();

    for (int i = 0; i <= amount-1; i++) {

        cout << array[i][0] << " , ";cout << array[i][1] << endl;

    }
    
}

void List::itemExists(std::string in) {
    string str;
    string price;

    ifstream myFile;
    myFile.open("itemCatalog.txt");
    if (myFile.fail()) {
        std::cout << "File cannot be opened";
        exit(1);
    }

    while (!myFile.eof()) {
        myFile >> str >> price;
        if (str == in) {
            cout << "Item " << str << " exists and it costs: " << price << endl;
            
       }
       
    }
   
    myFile.close();
}

void List::print_most_expen() {
    
    string str;
    int indexcurr = 0;
    double price;
    int largestindex1;
    int largestindex2;
    double largestprice;
    string pricecopy;
    ifstream myFile;

    myFile.open("itemCatalog.txt");



    if (myFile.fail()) {
        std::cout << "File cannot be opened";
        exit(1);
    }



    myFile >> str >> price;

        largestprice = price;
        largestindex1 = 0;
        largestindex2 = 0;
        array[0][0] = str;
        array[0][1] = price;
        indexcurr++;
    while (!myFile.eof()) {
        
        myFile >> str >> price;
        pricecopy = to_string(price);
        array[indexcurr][0] = str;
        array[indexcurr][1] = pricecopy;

        if (price > largestprice) {

            largestprice = price;
            largestindex1 = indexcurr;
            largestindex2 = indexcurr;
        }
        indexcurr++;
    }

    std::cout << "The most expensive item is: " << array[largestindex1][0] << ", and it costs: $" << array[largestindex2][1] << std::endl;

}

void List::addItem(string n, double p) {

    fstream myFile;


    myFile.open("itemCatalog.txt");

    if (myFile.fail()) {
        std::cout << "File cannot be opened";
        exit(1);
    }
    myFile.seekg(0, std::ios::end);
    myFile << endl  << n << " " << p << endl;

    updateinternal();

    myFile.close();
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
    cout << "sorting large numbers...";
    sort(arr, arr + n, compareNumbers);
}

void List::priceSort() {
    int i;
   

    string str;
    string price;
 
    int u = 0;


    fstream myfile;
    

    myFile.open("itemCatalog.txt");



    if (myFile.fail()) {
        std::cout << "File cannot be opened";
        exit(1);
    }


    while (!myFile.eof()) {

        myFile >> str >> price;
        array[u][0] = str;
        array[u][1] = price;
        pricearray[u] = stof(price);
        u++;

    }


    int j;
    int temp;

    string tempstringname;
    string tempstringcost;
    

    //sorting - DESCENDING ORDER
    for (i = 0; i < amount; i++)
    {
        for (j = i + 1; j < amount-1; j++)
        {
            if (pricearray[i] < pricearray[j])
            {
                temp = pricearray[i];
                tempstringname = array[i][0];
                tempstringcost = array[i][1];
                pricearray[i] = pricearray[j];
                array[i][0] = array[j][0];
                array[i][1] = array[j][1];
                pricearray[j] = temp;
                array[j][0] = tempstringname;
                array[j][1] = tempstringcost;

            }
        }
    }



     for (i = 0; i <= amount-2; i++) {

         std::cout << i+1 << ":" << setw(2) << array[i][0] << setw(8) << "$" << array[i][1] << std::endl;
        
    }


     myFile.close();

}

void List::printTranspose() {

    for (int i = 0; i < 30; i++) {

        std::cout << array[i][0] << " " << setw(10);


    }
    cout << endl;

    cout << endl;

    for (int i = 0; i < 30; i++) {

        std::cout << array[i][1] << setw(10);


    }


}


