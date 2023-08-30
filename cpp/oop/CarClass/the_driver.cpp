#include <iostream>
#include "car_header.h"
using namespace std;

int main()
{
	cout << "Using the default constructor...\n\n";
	Car car_object;//use default constructor
	car_object.change_x(5);
	cout << "car_object.get_x() : ";
	cout << (car_object.get_x()) << endl;
	car_object.change_y(10);
	cout << "car_object.get_y() : ";
	cout << (car_object.get_y()) << endl;

	Car* car_object_pointer = new Car();//default constructor with pointer
	car_object_pointer->change_x(15);
	cout << "car_pointer->get_x() : ";
	cout << (car_object_pointer->get_x()) << endl;
	car_object_pointer->change_y(20);
	cout << "car_pointer->get_y() : ";
	cout << (car_object_pointer->get_y()) << endl;

	cout << endl;

	cout << "Using the value pass constructor...\n\n";
	Car car_value_pass(12, 21);//use value pass constructor
	cout << "car_value_pass.get_x() : ";
	cout << (car_value_pass.get_x()) << endl;
	cout << "car_value_pass.get_y() : ";
	cout << (car_value_pass.get_y()) << endl;

	cout << "car_value_pass.change_x() : ";
	car_value_pass.change_x(1);
	cout << (car_value_pass.get_x()) << endl;
	cout << "car_value_pass.change_y() : ";
	car_value_pass.change_y(2);
	cout << (car_value_pass.get_y()) << endl;

	Car* car_value_pass_pointer = new Car(13, 31);//value pass constructor with pointer
	cout << "car_value_pass_pointer->get_x() : ";
	cout << (car_value_pass_pointer->get_x()) << endl;
	cout << "car_value_pass_pointer->get_y() : ";
	cout << (car_value_pass_pointer->get_y()) << endl;

	delete car_object_pointer; delete car_value_pass_pointer;
	return 0;
}