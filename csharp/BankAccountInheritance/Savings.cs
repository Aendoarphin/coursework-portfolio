using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bankAccountInheritance
{
    internal class Savings : Account
    {
        private double interest;

        public Savings(decimal balance, decimal interest) : base(balance) //balance value from Account
        {
            if (interest < 0)
                throw new ArgumentOutOfRangeException("Interest");
            this.interest = (double)interest;
        }
    }


}
