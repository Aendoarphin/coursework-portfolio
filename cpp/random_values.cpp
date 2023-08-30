#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));

    const int min = 10, max = 99;

    int a = (rand()%(max - min + 1)) + min,
        b = (rand()%(max - min + 1)) + min,
        c = a * b;

    char ch;

    int answer = c;

    cout << "Hello! I am your math tutor.\n";
    cout << "You will be given a multiplication problem to solve.";
    cout << " Press ENTER to continue.\n";
    cin.get(ch);

    cout << "Solve: " << a << " * " << b << " = " << endl;
    cout << endl;
    cout << "When finished, press ENTER to see the answer!\n";
    cin.get(ch);

    cout << "The answer is: " << c << endl;

    cout << "\nWhat answer did you get? ";
    cin >> answer;

    if (answer == c)
    {
        cout << "Good job!";
    }
            else if (answer != c)
            {
                cout << "\nI appreciate your effort. Perhaps we ";
                cout << "need to improve your multiplication.";
            }

    return 0;
}
