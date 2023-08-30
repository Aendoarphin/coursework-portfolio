#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; //Vector size created through initialization
	for (int i = 0; i < 15; i++)
	{
		cout << "Element " << i << " = " << "Integer " << numbers[i] << endl;
	}
	cout << endl;
	cout << "Numbers have been assigned to the vector" << endl;
}