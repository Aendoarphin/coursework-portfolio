using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArrWithObj
{
    class Employee
    {
        public string fname { get; set; }
        public string lname { get; set; }

        private decimal mSalary;

        double fedtax = 0.2;
        double statetax = 0.05;
        double security = 0.065;

        decimal netpay;
        
        decimal deductions;
        

        
        public Employee(string fname, string lname, decimal mSalary)
        {
            this.fname = fname; this.lname = lname;
            this.mSalary = mSalary;
        }

        public void printInfo()
        {
            Console.WriteLine($"first name: {fname} | last name: {lname} | salary: ${mSalary}");
            Console.WriteLine($"net pay: ${getNetPay()} | total deduction: ${getDeductions()}");
            
        }

        public decimal getNetPay()
        {
            return netpay = mSalary - deductions;
        }

        public decimal getDeductions()
        {
            return deductions = mSalary * (decimal)fedtax + (decimal)statetax + (decimal)security;
        }

    }
}
