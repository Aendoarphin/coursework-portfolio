#include <iostream>
#include <vector>
using namespace std;

class MyProd
{
private:
	vector<int> score; vector<string> name;
public:
	MyProd();
	void printThings() const;

};
MyProd::MyProd()
{
	score;
	name;

}
void MyProd::printThings() const
{
	for (int i = 0; i < score.size(); i++)
	{
		cout << score[i] << " " << name[i] << endl;
	}
}


int main()
{
	MyProd m; m.printThings();
	int myArray[10];
	for (int i = 0; i < 10; i++)
	{
		myArray[i] = i;
		cout << myArray[i] << ", ";
	}
	cout << endl;

	vector<int> myVector(10);//nothing in vector
	for(int i = 0; i < myVector.size(); i++)
	{
		myVector[i] = i;
		cout << myVector[i] << ", ";
	}
	cout << endl;

	vector<double> myDouble(20);
	for (int i = 0; i < myDouble.size(); i++)
	{
		myDouble[i] = (i + 1.2) * 1.1;
		cout << myDouble[i] << ", ";
	}
	cout << endl;

	double temp = myDouble[4];
	myDouble[4] = myDouble[19];
	myDouble[4] = myDouble[myDouble.size() - 1];//acceptable but complicated
	myDouble[19] = temp;//move previous element 4 to element 19
	//repeat:
	double temp2 = myDouble[4];
	myDouble[4] = myDouble[19];
	myDouble.pop_back();//vector = used for inner workings of cpp stack
			    //this shortens it by 1
	//now we restore the link by appending previous element 4, which is temp2:
	myDouble.push_back(temp2);
	return 0;
}