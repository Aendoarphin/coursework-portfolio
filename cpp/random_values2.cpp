#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));

    const int min = 100, max = 999;

    int a = (rand()%(max - min + 1)) + min,
        b = (rand()%(max - min + 1)) + min,
        c = a + b,
        user_answ;

    char ch;

    cout << "\n   Hello! I am your math tutor.\n";
    cout << "\n   You'll be given an addition problem to solve. ";
    cout << "Press ENTER to continue.\n";
    cin.get(ch);

    cout << "Solve " << a << " + " << b << " = ";
    cin >> user_answ;

    if (user_answ == c)
        cout << "\nGood Job!\n";
            else if (user_answ != c)
                cout << "\nSorry, the answer was " << c << ".\n";

    return 0;
}