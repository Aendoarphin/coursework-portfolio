using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bankAccountInheritance
{
    internal class Checking : Account
    {
        private double minimBalance = 50;
        private double minimBalanceFee = 5;
        private double checkFee = 1;

        public Checking(decimal balance) : base(balance)
        {
        }
    }
}
