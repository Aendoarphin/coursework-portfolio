#include <iostream>
#include <fstream>
using namespace std; 

//function with reference parameters
float reference_calculate(float &a, float &b, float &c)
{
	c = 20.1;
	a = 99.9; b = 87.8;
}


int main()
{
	float a = 11.1; float b = 7.8; float c = 1.1;
	float calc = reference_calculate(a, b, c);
	cout << "a: " << a << endl;
    	cout << "b: " << b << endl;
    	cout << "c: " << c << endl;

	return 0;
}
