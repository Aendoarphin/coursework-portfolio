#include <iostream>
using namespace std;

class Car
{
private:
	int x; int y;
public:
	Car(); Car(int a, int b);
	int get_x(); int get_y();
	void change_x(int what); void change_y(int what);
};

Car::Car() { x = 1; y = 1; }
Car::Car(int a, int b) { x = a; y = b; }
int Car::get_x(){return x;}
int Car::get_y(){return y;}
void Car::change_x(int what) { x = what; }
void Car::change_y(int what) { y = what; }

class SportsCar: public Car
{
private:
	int var;
public:
	SportsCar(); int get_var(); void change_var(int what);
};
SportsCar::SportsCar() { var = 1; }
int SportsCar::get_var() { return var; }
void SportsCar::change_var(int what) { var = what; }

int main()
{
	//make instance of class using pointer
	Car* m = new Car();//def constr
	Car* n = new Car(100,200);//val pass constr
	cout << "m = "; 
	m->change_x(8); 
	cout << m->get_x() << " " << m->get_y() << endl;
	cout << "n = ";
	n->change_y(7); cout << n->get_x() << " " << n->get_y() << endl;
	//* dereferences operator
	(*m).change_y(9);
	char ch1; cin >> ch1;
	cout << "assignment of pointers m = n " << endl;
	*m = *n; 
	m->change_x(10000);
	cout << "called m->change_x(10000)" << endl;
	cout << "now, n->get_x() = " << n->get_x() << endl;
	cout << "m->get_x() = " << m->get_x() << endl;

	SportsCar* the_class = new SportsCar();

	delete m; delete n; delete the_class;//memory release
	char ch; cin >> ch;
}