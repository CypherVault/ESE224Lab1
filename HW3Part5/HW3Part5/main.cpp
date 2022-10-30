
#include <iostream>
using namespace std;

/*
initalize array
selection sort online
once sorted only push array values for n times
k largest will end up being there
in sorted array, go through and increment tikes vakue is the same
*/

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void printsorted(int arr[], int n, int k)
{
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void selectionSort(int arr[], int n)
{
    int i, j, min_in;
    for (i = 0; i < n; i++)
    {
        min_in = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[min_in])
                min_in = j;
        swap(arr[i], arr[min_in]);
    }
}

int main(int argv, char* argc[])
{
    int arr[] = { 5,4,10,1,6,2,8,3 };
    int i, j, n, temp, k;
    cout << "Enter the k largest elemnets youw ould like to be found: ";
    cin >> k;
    n = sizeof(arr) / sizeof(int);
    cout << "Unsorted Array :";
    print(arr, n);
    selectionSort(arr, n);
    cout << "Sorted Array :";
    printsorted(arr, n, k);
    return(0);
}