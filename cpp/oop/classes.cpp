#include <iostream>
using namespace std; 
//"an object is an instance of a class"
//when you make a variable of the type class, you
//"instanciate" it in main()
//classes have to be above main or in their own .cpp file with it
//being part of the project or put them in a separate header and .cpp file
//.cpp file with main
//.cpp file with the :: class function implementation
//.h file with the list of functions 
//all being in the same project

struct Something
{
	int a; int b; int c;
};

//this below can go in a .h file:
class My_Class
{
	//int var1; int var2; int var3;//without private scope,
	//variables are public here, meaning it works like a struct
	//we dont want a clas like a struct 
	//"encapsulation" means you make variables "private" scope and whatever functions
	//you want to be "public" scope, which means that errors are minimized if software breaks
	private: 
		int var1; 
		int var2; 
		int var3; 
		float hide_this_from_the_outside_modification;
	public:
		//default constructor to initialize variables to default values when class is "instanciated"
		// class is instanciated:
		My_Class();
		//value-pass constructor is good also
		My_Class(int v1, int v2, int v3);
		int get_var1();//these are "accessor" member functions
		int get_var2(); //these are "accessor" member functions
		int get_var3();//these are "accessor" member functions
		float get_hide_this_from_the_outside_modifications();//these are "accessor" member functions
		void change_var1(int what);//"mutator" member functions
		void change_var2(int what); //"mutator" member functions
		void change_var3();//"mutator" member functions
};
//the above would go to a .h file, but ok in one file together with main
//then we implement the functions in a .cpp file called My_Class.cpp like below:
My_Class::My_Class()//default constructor
{
	var1 = 0, var2 = 1, var3 = 0; hide_this_from_the_outside_modification = 7;
}
My_Class::My_Class(int v1, int v2, int v3)
{
	var1 = v1; var2 = v2; var3 = v3;
	hide_this_from_the_outside_modification = 10.7;
}
int My_Class::get_var1()
{
	return var1;
}

int My_Class::get_var2()
{
	return var2;
}

int My_Class::get_var3()
{
	return var3;
}

float My_Class::get_hide_this_from_the_outside_modifications()
{
	return hide_this_from_the_outside_modification;
}

void My_Class::change_var1(int what)
{
	var1 = what;
}

void My_Class::change_var2(int what)
{
	var2 = what;
}

void My_Class::change_var3()
{
	var3 = var1 + hide_this_from_the_outside_modification;
}

//and the program with main() is another .cpp file
int main()
{
	cout << "hello from main()" << endl;
	Something the_struct_of_something;
	the_struct_of_something.a = 1; 
	the_struct_of_something.b = 2;
	the_struct_of_something.c = 3;

	//let's make an instrance of class My_Class by "instanciating"
	//and "exercise" the "methods", or in other words, make a variable of type My_Class
	//and use the function methods
	My_Class my_class1;//default constructor values
	My_Class my_class2(1, 2, 3);//value-pass constructor values
	cout << "my_class1.get_var1() = " << my_class1.get_var1() << endl;
	cout << "my_class1.get_hide_this_from_the_outside_modifications() = " << my_class1.get_hide_this_from_the_outside_modifications() << endl;
	cout << "my_class2.get_var2() = " << my_class2.get_var2() << endl;
	cout << endl;
	cout << "enter new value for var1 in my_class1: " << endl;
	int what;
	cin >> what;
	my_class1.change_var1(what);
	cout << "my_class1.get_var1() = " <<my_class1.get_var1() << endl;

	return 0;
}