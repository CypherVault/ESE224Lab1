#include <iostream>
#include <random>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;


constexpr int MIN = 1;
constexpr int MAX = 2;

int main()
{

    double numgen;
    double greatest, least, average;
    int n;
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<double> distr(MIN, MAX);

    std::cout << "enter the amount of numbers to be generated ";
    std::cin >> n;

    numgen = distr(eng);
    greatest = numgen;
    least = numgen;
    average = numgen;


    for (int i = 0; i < n-1; ++i) {
        
        numgen = distr(eng);
        if (numgen > greatest) {
            greatest = numgen;
        }
        if (numgen < least) {
            least = numgen;
        }

        average = (numgen + average) / 2;

    }
    cout << "greatest:" << greatest << " minimum:" << least << " Average:" << average;

    return 0;
}