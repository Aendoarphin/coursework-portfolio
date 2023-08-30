#include <iostream>
#include <string>
#include "tempheader.h"
using namespace std;

void main()
{

	Pair<int, int>* mpair = new Pair<int, int>(1, 2);
	cout << mpair->get_first() << endl;
	mpair->changeFirst(50000);
	cout << mpair->get_first() << endl;
	cout << mpair->get_second() << endl;

	Pair<double, string>* opair = new Pair<double, string>(121.764, "bob");
	cout << opair->get_first() << endl;
	cout << opair->get_second() << endl;

	delete mpair;
	delete opair;

	char ch;
	cin >> ch;
}