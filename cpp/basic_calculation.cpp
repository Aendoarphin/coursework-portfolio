#include <iostream>

using namespace std;

int main()
{
    // Define
    double sum,
        A = 24.0,
        B = 28.0,
        C = 32.0,
        D = 33.0,
        E = 37.0;
    double avrge;

    // Calculate the sum
    sum = A + B + C + D + E;

    // Calculate the average
    avrge = sum / 5;

    // Display the average
    cout << avrge;

    return 0;
}