using System;

namespace Employee
{
    class Program
    {
        static void Main(string[] args)
        {
            string fname, lname; double salary;
            Console.WriteLine("Enter first name: ");
            fname = Console.ReadLine();
            Console.WriteLine("Enter last name: ");
            lname = Console.ReadLine();
            Console.WriteLine("Enter salary: ");
            salary = double.Parse(Console.ReadLine());

            EmployeeClass Jeff = new EmployeeClass(fname, lname, salary);
            Jeff.PrintInfo();

            Console.ReadKey();
        }
    }
}
