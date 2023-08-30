using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bankAccountInheritance
{
    class Account
    {
        public decimal balance;

        public Account (decimal balance)
        {
            this.balance = balance;
        }

        public virtual void credit(decimal amount)
        {
            balance += amount;
        }

        public virtual void debit(decimal amount)
        {
            if (isLessThanAmount(amount) == false)
            {
                balance -= amount;
                Console.WriteLine($"Amount withdrawn: {amount}");
            }
            else if (isLessThanAmount(amount) == true)
                Console.WriteLine("DENIED: INSUFFICIENT BALANCE");
        }

        public bool isLessThanAmount(decimal amount)
        {
            if (balance < amount)
            {
                return true;
            }
            else
                return false;
        }

        public virtual void deposit(Account[] accounts, decimal amount, int index)
        {
            accounts[index].credit(amount);
            Console.WriteLine($"Account {index} balance after deposit of ${amount}: {accounts[index].balance}");
        }

        public virtual void withdraw(Account[] accounts, decimal amount, int index)
        {
            accounts[index].debit(amount);
            Console.WriteLine($"Account {index} balance after withdrawal of ${amount}: {accounts[index].balance}");
        }

    }
}
