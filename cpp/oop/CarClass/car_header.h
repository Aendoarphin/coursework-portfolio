#ifndef car_header_h
#define car_header_h

class Car
{
private:
	int x; int y;//two private vars
public:
	Car();//default
	Car(int x1, int y1);//value pass
	int get_x();//accessor
	int get_y();//functions
	void change_x(int new_x_var);//mutator
	void change_y(int new_y_var);//functions
};
#endif