//sample_header.h
#ifndef sample_header_h
#define sample_header_h

class The_Whatever
{
private:
	int x; int y;//variables are private scope, functions are public scope
public:
	The_Whatever();//default constructor //intializes variable
	The_Whatever(int x, int y);
	int get_x();//"accessor"  // gets a copy of variable
	int get_y();//"accessor"  // gets a copy of variable
	void change_x(int the_modified_x_variable);//"mutator" (change variable)
	void change_y(int the_modified_y_variable);//"mutator" (change variable)
};

#endif