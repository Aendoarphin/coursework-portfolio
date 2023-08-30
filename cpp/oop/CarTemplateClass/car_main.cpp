#include <iostream> 
#include <stdexcept>
#include <string>
#include "cartemp.h" 
using namespace std;

int main()
{
	int input = 0;
	while (input != 1)
	{
		try
		{
			Car<int>* car1 = new Car<int>(12);
			Car<int>* car2 = new Car<int>(10);
			Car<string>* car3 = new Car<string>("100");
			Car<string>* car4 = new Car<string>("200");
			cout << "speed of car1: " << car1->getSpeed() << endl;
			car2->changeSpeed(55.99);
			cout << "speed of car2: " << car2->getSpeed() << endl;
			cout << "car1 + car2: " << (*car1) + (*car2) << endl;
			cout << "car3 + car4: " << (*car3) + (*car4) << endl;
			cout << "car1 + car4: " << (*car1) + ((int)car4) << endl;
			delete car1; delete car2; delete car3; delete car4;
		}
		catch (exception &e)
		{
			cout << "Error: " << e.what() << endl;
		}
		cout << "Enter 1 to quit: " << endl;
		cin >> input;
	}
	char ch; cin >> ch;
}