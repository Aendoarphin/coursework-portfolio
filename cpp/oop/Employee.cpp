#include <iostream>
#include <string>
using namespace std;
//interface in the Time class:
class Time
{
public:
	Time(int when); Time();
	int getTime(); void setTime(int when);//two functions per var; common thing
private:
	int theTime;
};

//implementation of functions in Time class:
Time::Time(int when) { theTime = when; }
Time::Time() { theTime = 1; }
int Time::getTime() { return theTime; }
void Time::setTime(int when) { theTime = when; }


class Employee
{
public:
	Employee();
//	Employee(string name, float salary, Time arrive, Time leave);//shadowing
	Employee(string name2, float salary2, Time arrive2, Time leave2);//shadowing resolved
	void printInfo();
	void setArrive(int when); void setLeave(int when);
	
private:
	string name; float salary; Time arrive; Time leave;
};
Employee::Employee()
{
	name = "bob"; salary = 10; arrive = Time(8); leave = Time(5);
}
/*
Employee::Employee(string name2, float salary2, Time arrive2, Time leave2)
{
	name = name2; salary = salary2; arrive = Time(arrive2); leave = Time(leave2);
}*/
Employee::Employee(string name2, float salary2, Time arrive2, Time leave2):arrive(arrive2), leave(leave2)
{
	name = name2; salary = salary2; //arrive = Time(arrive2); leave = Time(leave2);
}
void Employee::printInfo() 
{
	cout << name << " " << salary << " " << arrive.getTime()
		<< " " << leave.getTime() << endl;
}

void setArrive(int when); void setLeave(int when);


int main()
{
	Employee* e = new Employee();
	Employee* a = new Employee("bill", 8, 9, 7);
	e->printInfo();
	a->printInfo();
	delete a; delete e;//releases used memory back to the computer
	char ch; cin >> ch;
}