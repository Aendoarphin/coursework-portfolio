#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car
{
private:
	string make; string model; int speed;
public:
	Car(); Car(string theMake, string theModel); Car(int whatSpeed);
	void setMake(string newMake); void setModel(string newModel);
	string getMake(); string getModel(); int getSpeed();
	Car operator+(Car& what); Car operator-(Car& what);
};

Car::Car() { make = "Honda"; model = "Accord"; }
Car::Car(string theMake, string theModel) { make = theMake; model = theModel; }
Car::Car(int whatSpeed) { speed = whatSpeed; }
void Car::setMake(string newMake) { make = newMake; }
void Car::setModel(string newModel) { model = newModel; }
string Car::getMake() { return make; }
string Car::getModel() { return model; }
int Car::getSpeed() {return speed;}
Car Car::operator+(Car& what) { Car s = *this; s.operator+(what); return s; }
Car Car::operator-(Car& what) { Car d = *this; d.operator-(what); return d; }

class SportsCar : public Car
{
private:
	bool hasTurbo;
public:
	SportsCar();
	SportsCar(string make, string model, bool tur);
	void turbo(bool setTurbo);
	string checkTurbo();
};

SportsCar::SportsCar() { hasTurbo = 0; }
SportsCar::SportsCar(string make, string model, bool tur) : Car(make, model)
{
	hasTurbo = tur;
}
void SportsCar::turbo(bool setTurbo) { hasTurbo = setTurbo; }
string SportsCar::checkTurbo()
{
	if (hasTurbo == 0)
	{
		return "No turbo.";
	}
	else
	{
		return "Turbo installed!\n";
	}
}

int main()
{
	int input = 0;
	while (input != 1)
	{
		try
		{
			vector<Car*> cars(4);
			cars[0] = new Car("Lamborghini", "Aventador");
			cars[1] = new Car("Aston Martin", "DB9");
			cars[2] = new SportsCar("Porsche", "911", true);
			cars[3] = new SportsCar("Rayfield", "Caliburn", false);
		}
		catch (exception& e)
		{
			cout << "Error: " << e.what() << endl;
		}
		cout << "Enter 1 to quit: " << endl;
		cin >> input;
	}
	return 0;
}