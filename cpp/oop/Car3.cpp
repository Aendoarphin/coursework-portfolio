#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	double speed; class SportsCar;
public:
	Car(); Car(double theSpeed); void setSpeed(double whatSpeed); double getSpeed();
};
Car::Car() { speed = 0; }
Car::Car(double theSpeed) { speed = theSpeed; }
void Car::setSpeed(double whatSpeed) { speed = whatSpeed; }
double Car::getSpeed() { return speed; }

class Car::SportsCar
{
private:
	string model;
public:
	SportsCar(); SportsCar(string theModel);
	void setModel(string whatModel); string getModel();
};
Car::SportsCar::SportsCar() { model = "n/a"; }
Car::SportsCar::SportsCar(string theModel) { model = theModel; }
void Car::SportsCar::setModel(string whatModel) { model = whatModel; }
string Car::SportsCar::getModel() { return model; }

int main()
{
	

	return 0;
}