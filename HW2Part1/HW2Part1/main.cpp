#include <iostream>
using namespace std;
bool prime_check(int n);

bool prime_check(int n) {
    int i;
    bool prime = true;

    // 0 and 1 are the exceptions, rule them out now   
    if (n == 0 || n == 1) {
        prime = false;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    return prime;
}


int main() {

    int n, i;
    bool result = false;

    cout << "Enter a positive  integer: ";
    cin >> n;

    for (i = 2; i <= n / 2; ++i) {
        if (prime_check(i)) {
            if (prime_check(n - i)) {
                cout << n << " = " << i << " + " << n - i << endl;
                result = true;
            }
        }
    }

    if (!result)
        cout << n << "No combination of prime numbers will add to this number.";

    return 0;
}

