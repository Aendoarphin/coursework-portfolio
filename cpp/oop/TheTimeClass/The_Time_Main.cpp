#include <iostream>           //or .h above <iostream>
#include "The_Time_Header.h"  //.cpp instead sometimes
using namespace std;

int main() //driver
{
	for (int i = 0; i < 10000000; i++)
	{
		//stack       heap
		The_Time* t = new The_Time();
		The_Time* t2 = new The_Time(10);
		The_Time mt;
		The_Time mt2(7);

		//cout << t->getTime() << endl;
		//cout << t2->getTime() << endl;
		t2->changeTime(20);
		t->changeTime(10);

		//cout << "new: " << t->getTime() << endl;
		//cout << "new: " << t2->getTime() << endl;
		int x = (t->getTime()) + (t2->getTime());
		//cout << x << endl;
		//cout << "new: " << mt.getTime() << endl;
		//cout << "new: " << mt2.getTime() << endl;

		delete t; delete t2; //returns memory to the heap
	}

	char ch; cin >> ch; 
	return 0;
}