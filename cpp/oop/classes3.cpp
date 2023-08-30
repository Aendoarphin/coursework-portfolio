#include <iostream>
#include <string> //extra
using namespace std;
//header file .h
class MyClass
{
private:
	int a; int b; int c; string the_string;
public:
	MyClass();//default constr
	MyClass(int a1, int b1, int c1, string s1);//value pass constr
	//function to get copies of a, b, c, and extra "the_string":
	int get_a(); int get_b(); int get_c(); string get_the_string();
	//functions to change a, b, c, the_string:
	void change_a(int what); void change_b(int what); void change_c(int what);
	void change_the_string(string s2);
};
//the above usually goes in header .h file that calls MyClass

//the below usually goes in cpp file called MyClass
MyClass::MyClass() { a = 0; b = 0; c = 0; the_string = "bleh"; }
MyClass::MyClass(int a1, int b1, int c1, string the_string2)
{
	a = a1; b = b1; c = c1;
}
int MyClass::get_a(){return a; }
int MyClass::get_b(){return b; }
int MyClass::get_c(){return c; }
string MyClass::get_the_string() { return the_string; }

void MyClass::change_a(int what){a = what; }
void MyClass::change_b(int what){b = what; }
void MyClass::change_c(int what){c = what; }
void MyClass::change_the_string(string s2) { the_string = s2; }
//the above goes in a cpp file called MyClass usually

//this goes in another .cpp file called MyMain.cpp (driver for assignment)
int main()
{
	MyClass m; //default constr
	MyClass n(1, 2, 3, "my_string"); //value pass const
	cout << m.get_a() << endl;
	cout << n.get_a() << endl;
	n.change_a(5000);
	cout << n.get_a() << endl;

	//using a pointer with "new" command
	MyClass* the_class = new MyClass();
	MyClass* the_value_pass_class_var = new MyClass(10, 20, 30, "forty");
	
	int the_a_variable = the_class->get_a();
	cout << the_a_variable << endl;
	the_class->change_a(100);
	cout << the_class->get_a() << endl;
	cout << the_class->get_the_string() << endl;
	//the below frees memory
	delete the_class; delete the_value_pass_class_var;
	return 0;
}
