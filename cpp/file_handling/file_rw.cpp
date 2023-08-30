#include <iostream>
#include <fstream>
using namespace std;

//Part #1
float calculate_cost(float cost, float markup)
{
	float price;
	price = cost * (markup + 1.0);
    
	return price;
}

//Part #1
void write_the_file()
{
	ofstream outfile;
	outfile.open("input.txt");
	//write to file:
	for (int i = 1; i <= 10; i++)
	{
		outfile << i << endl; 
	}
	
	outfile.close();
}

//Part #2
void read_using_while()
{
	ifstream input_file;
	input_file.open("input.txt");
	int x;
	while (input_file >> x)
	{
		cout << x << endl;
		input_file >> x;
		cout << x << endl;
	}
	//close the file:
	input_file.close();
	cout << "\nFile has been read with while loop." << endl;
}

int main()
{
	float x, y, result;
	cout << "Enter Cost: " << endl;
	cin >> x;
	cout << "Enter Markup: " << endl;
	cin >> y;
	result = calculate_cost(x, y);
	cout << "\nResult = " << result << endl << endl;

	cout << "Writing file...\n";
	write_the_file();
	cout << "File has been written.\n\n";

	read_using_while();
	
    return 0;
}

