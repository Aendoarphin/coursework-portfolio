#include <iostream>
#include <fstream>
using namespace std;

void read_file_while()
{
	ifstream myInfile;
	myInfile.open("input.txt"); //assuming that the text file has been created
	int x, sum = 0;
	cout << "Reading the file...\n" << endl;
	while (myInfile >> x) //while we can read the file
	{
		cout << x << endl; //print the number of the first line
		sum += x; //update the sum
		myInfile >> x; //read the next line
		cout << x << endl; //print the number of the newly read line
		sum += x;
	}
	myInfile.close();
	cout << endl << "The file has been read!" << endl;
	cout << "\nThe sum of the numbers is: " << sum << endl;
}

void read_file_for()
{
	ifstream myInfile;
	myInfile.open("input.txt"); //assuming that the text file has been created
	int x, sum = 0;
	cout << "Reading the file...\n" << endl;
	for (int i = 1; i <= 20; i++)
	{
		myInfile >> x; //read the file
		sum += x; //update the sum
		cout << x << endl; //print the content of the line
	}
	myInfile.close();
	cout << endl << "The file has been read!" << endl;
	cout << "\nThe sum of the numbers is: " << sum << endl;
}

int main()
{
	read_file_while();
	read_file_for();
}

