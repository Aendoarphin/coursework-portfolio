//main.cpp
#include <iostream>
#include "header.h"
using namespace std;

int main()
{
	//a class in main becomes an object when program is running
	//variables even with the regular pointers are on "the stack" memory in RAM
	//that is what these are below - even the classes 
	The_Whatever the_w_object; //<<<<< use for creating car object
	The_Whatever the_x_object; //both x are 1
	int a = 99;
	the_w_object.change_x(a);
	cout << the_w_object.get_x() << endl;
	int b = 1000;
	the_x_object.change_x(b);
	cout << the_x_object.get_x() << endl;

	//now we will use "stack" and another part of memory called the "heap"
	//"heap" is a more fancy part of memory because of the arrangement 
	//of memory and vars is more efficient and faster, and more secure
	//"stack" is a data structure that is a stack, like stack of plates
	//the plate on top is the one you remove first
	//a "heap" is a loosely organized "tree" data structure
	//pointers are always on the stack
	//you can create objects on the heap
	//pointer is on stack -> points to new object on heap
	The_Whatever* whatever_pointer = new The_Whatever();    //<<< use for car pointer
	//"new" is a command to create a new object on the heap
	//to access the functions -> the arrow operator is used:
	whatever_pointer->change_x(7);
	cout << "printing whatever_pointer->get_x() : " << endl;
	cout << (whatever_pointer->get_x()) << endl;
	//<< is an operator, just like + * - etc.
	//-> is also an operator. it has higher precedence (it is done first)
	//before the << operator

	//when the program finishes and we have a * pointing to a new object on heap
	//theory says that if we dont delete the pointer / free up the memory on the heap
	//we lose memory / available RAM until we reboot the computer
	//this is called a memory leak
	//but windows vs corrects this 
	//to free memory on the heap, use:
	delete whatever_pointer;

	return 0;
}