#include <iostream>

using namespace std;

int main()
{
    // Define
    const double mealCharge = 88.67, // Meal charge
           taxRate = 0.0675, // Tax rate
           tipPrcntge = 0.2; // Tip percentage
    double tip, // Tip amount
           withTax, // Meal charge with tax
           tax, // Tax amount
           billTotal; // Total bill amount

    // Calculate tax amount
    tax = 0.0675 * 88.67;

    // Calculate total after tax
    withTax = tax + 88.67;

    // Calculate tip amount after taxed meal charge
    tip = 0.2 * withTax;

    // Calculate total bill amount
    billTotal = withTax + tip;

    // Display meal cost, tax, tip, and total bill
    cout << "Meal cost: $" << mealCharge << endl;
    cout << "Tax amount: $" << tax << endl;
    cout << "Tip amount: $" << tip << endl;
    cout << "Total bill: $" << billTotal << endl;

    return 0;
}