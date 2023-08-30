#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    const int minDays = 0;
    double totEarn = 0.01;

    int numDays;

    string filename;
    cout << "Enter input file name: ";
    cin >> filename;

    ifstream infile;
    infile.open(filename.c_str());
    if(!infile){
        cout << "\nFile not found.\nProgram terminated.\n";
        return 0;
        }

    infile >> numDays;
    infile.close();

    cout << "Enter output file name: ";
    cin >> filename;

    ofstream outfile;
    outfile.open(filename.c_str());
    if(!outfile){
        cout << "\nFile not found.\nProgram terminated.\n";
        return 0;
    }

    if(numDays <= minDays){
        cout << "\nFile contains invalid input. Program terminated.\n";
        return 0;
    }
    else{
        for(int i = 1; i <= numDays; i++)
        {
            outfile << fixed << setprecision(2) << "Day " << setw(1) << i << ": " << "$" <<totEarn << endl;
            totEarn *= 2;
        }
    }

    outfile.close();

    cout << "\nOutput has been executed\n";
    cout << "Program terminated\n";

    return 0;
}
