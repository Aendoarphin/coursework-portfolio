#include <iostream>
using namespace std;

int main()
{
    int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int i = 0; i < 10; i++)
    {
        cout << "Element " << i << " = Integer " << numbers[i] << endl;
    }
    cout << endl;
    cout << "Numbers have been assigned to the array . . . hooray" << endl;
}
