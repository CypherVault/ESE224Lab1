#include <iostream>
#include <math.h>

using namespace std;

double sqrt(double number)
{
    double error = 0.001; //precision
    double s = number;

    while ((s - number / s) > error) //loop until precision satisfied 
    {
        s = (s + number / s) / 2;
    }
    return s;
}

int main() {
    double n;

    cout << "Enter the number to be square rooted: ";
    cin >> n;

    cout << "Square root to .001 precision: " << sqrt(n);

}
