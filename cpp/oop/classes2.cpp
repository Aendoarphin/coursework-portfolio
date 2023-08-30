//put class first: 
//interface or class definition: list the variables and functions (can go in a .h file)
//then we have the implementation: actually write the functions (can go in a .cpp file)
//then main where we use the class (if doing the above separate file, must go in another .cpp file)
#include <iostream>
#include <string>
using namespace std;


class Whatever
{
	//list vars, they are always private:
private: 
	int a; int b; string c;
public:
	//accessor functions to access the var contents and see / print what is there
	int get_a();
	int get_b();
	string get_c();
	//modifiers or mutator functions to change var contents
	void change_a(int something);
	void change_b(int something);
	void change_c(string huh);
	//constructor to initialize the vars:
	Whatever();//default values
	Whatever(int a1, int b1, string c1);//values pass in

};

Whatever::Whatever(int a1, int b1, string c1)
{
	a = a1; b = b1; c = c1;
}
Whatever::Whatever()
{
	a = 0; b = 0; c = "initialized";
}
//class implementation below: 
int Whatever::get_a()
{
	return a;
}
int Whatever::get_b()
{
	return b;
}
string Whatever::get_c()
{
	return c;
}

void Whatever::change_a(int something)
{
	a = something;
}
void Whatever::change_b(int something)
{
	b = something;
}
void Whatever::change_c(string huh)
{
	c = huh;
}

int main()
{
	Whatever my_class1;//default vals for vars
	Whatever my_class2(10, 20, "something");//pass in vals of our choice
	cout << "my_class2.get_a() initial value = " << my_class2.get_a() << endl;
	cout << "my_class2.get_b() initial value = " << my_class2.get_b() << endl;
	cout << "my_class2.get_c() initial value = " << my_class2.get_c() << endl;
	cout << endl; cout << "my_class1 with default values: " << endl;
	cout << "my_class1.get_a() initial value = " << my_class1.get_a() << endl;
	cout << "my_class1.get_b() initial value = " << my_class1.get_b() << endl;
	cout << "my_class1.get_c() initial value = " << my_class1.get_c() << endl;
	cout << endl;
	int the_a = 9; int the_b = 10; string the_c = "interesting";
	my_class1.change_a(the_a); my_class1.change_b(the_b); my_class1.change_c(the_c);
	cout << "new values: " << endl;
	cout << "my_class1.get_a() = " << my_class1.get_a() << endl;
	cout << "my_class1.get_b() = " << my_class1.get_b() << endl;
	cout << "my_class1.get_c() = " << my_class1.get_c() << endl;

	return 0;
}