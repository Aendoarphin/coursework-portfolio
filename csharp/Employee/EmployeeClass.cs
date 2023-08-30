using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Employee
{
    class EmployeeClass
    {
        public string fname { get; set; }
        public string lname { get; set; }
        public double salary;
        private double taxRate;
        private double taxAmount;
        private double salaryAfterTaxes;

        public EmployeeClass(string firstn, string lastn, double theSalary) //this. if same param/var name
        {
            fname = firstn; lname = lastn; salary = theSalary; // val = param
        }
        
        public void PrintInfo()
        {
            Console.WriteLine($"First name: {fname} | Last name: {lname} | Salary: ${salary}");
        }

    }
}
