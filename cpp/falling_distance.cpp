//Falling Distance
#include <iostream>
#include <cmath>
using namespace std;

//Prototype
double fallingDistance(double t);

int main()
{
    double d = 0.0;

    for(int time = 1; time <=10; time++)
    {
        d = fallingDistance(time);
        cout << time << " seconds: " << d << " meters\n"; //Displaying returned val
    }
    return 0;
}

double fallingDistance(double t)
{
    const double g = 9.8;
    double d = 0.0;
    d = (0.5*g)*(pow(t,2));
    return d;
}