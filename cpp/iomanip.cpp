#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Define
    const double
    oil = 1.25,
    spam = 9,
    eggs = 10,
    maxbowl = 20;

    double
    amntbowl,
    ttloil,
    ttlspam,
    ttleggs;

    // Ask
    cout << "How many bowls of fried rice do you want to make?:";
    cin >> amntbowl;

    // Calculate
    ttloil = (oil * amntbowl) / maxbowl;
    ttlspam = (spam * amntbowl) / maxbowl;
    ttleggs = (eggs * amntbowl) / maxbowl;

    // Print results
    cout << "If you want to make " << amntbowl << " bowls of fried rice, you will need:\n\n";
    cout << setprecision(2) << fixed; // Show decimals limited to two spaces
    cout << ttloil << setprecision(2) << " cup of oil\n";
    cout << ttlspam << setprecision(2) << " cup of Spam\n";
    cout << ttleggs << " cup of eggs\n";

        return 0;
}