#include <iostream>
using namespace std;

 int main() {
    long long int n, f1 = 0, f2 = 1, nextnum = 0;
    int fcount = 2;

    cout << "Enter the ceilig of the value we'd like to reach. (99999999999) works.";
    cin >> n;

    cout << "Fibonacci Series: ";

    nextnum = f1 + f2;

    while (nextnum <= n) {
        
        f1 = f2;
        f2 = nextnum;
        nextnum = f1 + f2;   
        fcount++;
        if ((fcount == 10) || (fcount == 20) || (fcount == 30) || (fcount == 40) || (fcount == 50)) {
            cout << "F(" << fcount << "):" << nextnum << ", ";
        }
    }
    

    
    return 0;
}