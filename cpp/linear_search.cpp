#include <iostream>
using namespace std;


int main()
{
	int myarray[] = { 21, 9, 7, 90, 74, 55, 34, 8, 7, 4 };
	for (int i = 0; i < 10; i++)
	{
		cout << myarray[i] << ", ";
	}
	cout << endl;

	//lazy way of linear search
	int key = 7; 
	for (int i = 0; i < 10; i++)
	{
		if (myarray[i] == key)
		{
			cout << "We found it at i = " << i << endl;
		}
	}

	//change to find first occurence and stop
	cout << "change to find first occurence and stop:" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (myarray[i] == key)
		{
			cout << "Key is located @ " << i << endl;
			break;
		}
	}
	cout << "finished searching" << endl;

	char ch; cin >> ch;

	return 0;
}
