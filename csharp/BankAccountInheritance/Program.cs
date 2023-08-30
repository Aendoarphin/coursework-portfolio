using System;

namespace bankAccountInheritance
{
    class Program
    {
        //init for all allocated accounts
        static void initAccounts(Account[] customers)
        {
            for(int i = 0; i < customers.Length; i++)
            {
                decimal balance;
                double interest;
                Console.Write($"Enter balance: ");
                balance = decimal.Parse(Console.ReadLine());
                Console.Write("Enter amount to withdraw: ");
                interest = double.Parse(Console.ReadLine());
                Savings mysavings = new Savings(balance, Convert.ToDecimal(interest));
                customers[i] = mysavings;
            }
        }
        //init for individual accounts
        static void inititializeAccounts(Account[] accounts)
        {
            decimal balance = 100;
            double interest = 0.05;
            Savings mySavings1 = new Savings(balance, Convert.ToDecimal(interest));
            accounts[0] = mySavings1;
            balance = 1100;
            interest = 0.07;
            Savings mySavings2 = new Savings(balance, Convert.ToDecimal(interest));
            accounts[1] = mySavings2;
        }
        //print blnce
        static void printBalance(Account[] accounts)
        {
            foreach(Account myAccount in accounts)
            {
                int count = 0;
                Console.WriteLine($"Account {accounts[count]} balance: {accounts[count].balance}");
                count++;
            }
        }
        static void Main(string[] args)
        {
            //create an array of account objs
            Account[] accounts = new Account[2];
            initAccounts(accounts);
            //decimal balance = 1000;
            //double interest = 0.05;

            //Savings mysavings = new Savings(balance, Convert.ToDecimal(interest));

            //mysavings.deposit(50M);
            //Console.WriteLine("Cash has been deposited");

            //decimal amount;
            //Console.Write("Enter amount to withdraw: ");
            //amount = decimal.Parse(Console.ReadLine());
            //mysavings.withdraw(amount);
            //Console.WriteLine($"Amount withdrawn: {amount}");

            int index = 0;
            printBalance(accounts);
            accounts[index].deposit(accounts, 50M, index);
            index = 1;
            accounts[index].withdraw(accounts, 70M, index);
        }

    }
}
