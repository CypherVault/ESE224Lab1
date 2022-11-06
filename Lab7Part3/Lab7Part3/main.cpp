#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], i, j, numsearch, x{ 0 }, keepchecking{ 1 }, lastpossiblerow;

    // cout << "Enter number of rows (between 1 and 100): ";
    // cin >> r;
    r = 3;
    c = 4;
   // cout << "Enter number of columns (between 1 and 100): ";
   //  cin >> c;

    cout << endl << "Enter elements of the matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << "Enter element matrix"  << "[" << i + 1 << "][" << j + 1 << "]" << " : ";
            cin >> a[i][j];
        }

    cout << "Enter number to search for: ";
    cin >> numsearch;

    //searching in matrix algorithm
    //first step is to find the row
    while (keepchecking) {
        if (a[x][0] <= numsearch) {
            if (a[x][0] == numsearch) {
                cout << numsearch << " found at: a[" << x << "][0]. \n";
                return 1;
            }
        }
        else {
            keepchecking = 0;
        }

        lastpossiblerow = x; 
        keepchecking = 1;
        x++;


    }

    for (i = 0; i < (c - 1); i++) {

        if (a[lastpossiblerow][i] == numsearch) {
            cout << numsearch << " found at: a[" << lastpossiblerow << "][" << i << "]. \n";
            return 1;
        }



    }




    return 0;
}