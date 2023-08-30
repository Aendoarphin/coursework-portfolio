//body.cpp
#include "header.h"
//implementation for the class:
The_Whatever::The_Whatever()//constructor 
{
	x = 0; y = 0;//our choice of initial value
}

The_Whatever::The_Whatever(int x, int y)//constructor
{
	x = 0; y = 0;
}

int The_Whatever::get_x()//accessor
{
	return x;//return a copy of x
}

int The_Whatever::get_y()//accessor
{
	return y;//return a copy of y
}

void The_Whatever::change_x(int the_modified_x_variable)
{
	x = the_modified_x_variable;
}

void The_Whatever::change_y(int the_modified_y_variable)
{
	y = the_modified_y_variable;
}