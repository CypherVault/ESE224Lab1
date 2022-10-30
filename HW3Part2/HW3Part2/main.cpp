#include <iostream>
#include <vector>
using namespace std;

int vector_sum(vector<int> vect) {
    //save largest value, call it with a range each time and the final largst after the size of arrya as checked end the porogram 

    int i = 0;
    int size;
    int sum_found = 0;
    int largest_found = 0;

    //final image will be 
    //-2 -3 4 -1 -2 1 5 -3

    size = vect.size();

    for (int x : vect) {

        // cout << i << endl;
        if (i < (size - 4)) {
            sum_found = ((vect[i]) + (vect[i + 1]) + (vect[i + 2]) + (vect[i + 3]) + (vect[i + 4]));
           // cout << (vect[i]) << "," << (vect[i + 1]) << "," << (vect[i + 2]) << "," << (vect[i + 3]) << "," << (vect[i + 4]) << endl;
        }

        if (i < (size - 3)) {
            sum_found = (vect[i]) + (vect[i + 1]) + (vect[i + 2]) + (vect[i + 3]);
        }

        if (i < (size - 2)) {
            sum_found = (vect[i]) + (vect[i + 1]) + (vect[i + 2]);
        }

        if (i < (size - 1)) {
            sum_found = (vect[i]) + (vect[i + 1]);
        }

        if (i == (size)) {
            sum_found = (vect[i]);
        }

       // cout << sum_found << endl;

        if (i == 0) {
            largest_found = sum_found;
        }

        if (sum_found > largest_found) {
            largest_found = sum_found;
        }

        i++;
    }
    return largest_found;

}

int main()
{
    // Create an empty vector

    vector<int> vect{ -2,-3,4,-1,-2,1,5,-3 };
   

   // for (int x : vect)
      //  cout << x << " ";

    std::cout << "largest subarray found: " << (vector_sum(vect));
    return 0;
}