#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void write_to_file()
{
	ofstream name_of_outfile;
	name_of_outfile.open("input.txt");
	//write to file:
	for (int i = 1; i <= 10; i++)
	{
		name_of_outfile << i << endl;
	}

	name_of_outfile.close();
}

void read_using_for()
{
	ifstream name_of_infile;
	name_of_infile.open("nameof.txt");
	int x;
	cout << "reading file using a for loop" << endl;
	for (int i = 1; i <= 10; i++)
	{
		name_of_infile >> x;
		cout << x << endl;
	}
	//close the file:
	name_of_infile.close();
}

void read_using_while()
{
	ifstream name_of_infile;
	name_of_infile.open("nameof.txt");
	//read the file
	int x;
	while (name_of_infile >> x) //while we can read the file into x
	{
		cout << x << endl; //write a number on each line to screen
		name_of_infile >> x; //read a number on each line to file
		cout << x << endl;
	}
	//close the file:
	name_of_infile.close();

	cout << "\nFinished reading with while loop" << endl;
}

int function_name(int x, int y) //takes integers as arguments
{
	int result;
	
	result = x * y;

	return result; //returns an integer
}

int main()
{
	vector<int> vector_name;
	vector_name.push_back(1); //adds a slot in "vector_name" with a value of integer 1
	return 0;
}







