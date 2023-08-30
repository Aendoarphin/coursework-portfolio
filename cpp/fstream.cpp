#include<iostream>
#include <fstream>
using namespace std;

int main()
{
	char ch;	// To hold a character

	fstream file("letters.txt", ios::in);
	file.seekg(8L, ios::beg);
	file.get(ch);						
	cout << ch << endl;		

	file.seekg(-4L, ios::end);
	file.get(ch);
	cout << ch << endl;

	file.seekg(3L, ios::cur);
	file.get(ch);
	cout << ch << endl;


}