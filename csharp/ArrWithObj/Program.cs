using System;

namespace ArrWithObj
{
    class Program
    { 
        static void Main(string[] args)
        {
            int size = 3;
            string fname, lname;
            decimal mSalary;
            Employee[] employeelist = new Employee[size];
            for (int i = 0; i < size; i++)
            {
                Console.Write("enter first name: ");
                fname = Console.ReadLine();
                Console.Write("enter last name: ");
                lname = Console.ReadLine();
                Console.Write("enter salary: ");
                mSalary = decimal.Parse(Console.ReadLine());
                //Employee e = new Employee(fname, lname, mSalary);
                //employeelist[i] = e;
                //e.printInfo();
                employeelist[i] = new Employee(fname, lname, mSalary);
                //employeelist[i].printInfo();
            }
            foreach(Employee e in employeelist)
            {
                e.printInfo();
            }
        }
    }
}
