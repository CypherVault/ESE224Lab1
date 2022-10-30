#include <iostream>
#include <math.h>

using namespace std;

double sqrt(double square)
{
    double error = 0.001; //precision
    double s = square;

    while ((s - square / s) > error)
    {
        s = (s + square / s) / 2;
    }
    return s;
}

int main() {
    double n;

    cout << "Enter the number to be square rooted: ";
    cin >> n;

    cout << "Square root to .001 precision: " << sqrt(n);

}
