#include <iostream>

#define MAX 100
using namespace std;


	//https://cplusplus.com/reference/cstring/strcmp/

	//based on return value youre going to sort them in a dufferent way



    void sortStrings(char arr[][MAX], int n)
    {
        char temp[MAX];

        // Sorting strings using bubble sort
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (strcmp(arr[j], arr[j + 1]) > 0)
                {
                    strcpy_s(temp, arr[j]);
                    strcpy_s(arr[j], arr[j + 1]);
                    strcpy_s(arr[j + 1], temp);
                }
            }
        }
    }

    int main()
    {
        int i = 0;
        //std::string q;
        char arr[11][MAX];

        std::cout << "enter the words to sort. you can only enter 10 words:" << std::endl;
        while (i <= 10) {
        std::cin >> arr[i];
        i++;
}



        int n = sizeof(arr) / sizeof(arr[0]);

        sortStrings(arr, n);

        printf("Strings in sorted order are : ");
        for (int i = 0; i < n; i++)
            printf("\n String %d is %s", i + 1, arr[i]);
        return 0;
    }
