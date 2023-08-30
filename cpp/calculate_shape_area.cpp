#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "\n   Geometry Calculator\n\n"
         << "   1. Calculate the area of a circle\n"
         << "   2. Calculate the area of a rectangle\n"
         << "   3. Calculate the area of a triangle\n"
         << "   4. Quit\n\n"
         << "   Enter your choice (1-4): ";

    int user_choice;


    cin >> user_choice;
    cout << endl;

    switch (user_choice)
    {
        case 1:

            int r;

            cout << "   Enter the radius: ";
            cin >> r;
            cout << endl;

            if (r < 0)
            {
                 cout << "   Error! Radius must be a nonnegative.\n";
            }
                else
                {
                    double pi = 3.14159;
                    double area = pi * (r*r);

                    cout << "   The area of the circle is: " << area << endl;
                }
        break;
        case 2:

            int l,w;

            cout << "Enter the length: ";
            cin >> l;
            cout << endl;
            cout << "Enter the width: ";
            cin >> w;
            cout << endl;

            if (l < 0 || w < 0)
            {
                cout << "Error! Length and width must be nonnegative.\n";
            }
                else
                {
                    double area = l * w;
                    cout << "The area of the rectangle is: " << area << endl;
                }
        break;
        case 3:

            int b,h;

            cout << "Enter length of base: ";
            cin >> b;
            cout << endl;
            cout << "Enter length of height: ";
            cin >> h;
            cout << endl;

            if (b < 0 || h < 0)
            {
                cout << "Error! Base and height must be nonnegative.\n";
            }
                else
                {
                    double area = b * h * .5;
                    cout << "The area of the triangle is: " << area << endl;
                }
        break;
        case 4:
        {
            cout << "   Goodbye\n";
        }
        break;
        default:
            cout << "Sorry, you have entered an invalid key.\n";
    }

    return 0;
}