using System;

namespace LotteryNumbers
{
    class Program
    {
        static void printTheNumbers(int[] lotto)
        {
            foreach (int r in lotto)

                Console.WriteLine($"{r}");
        }
        static bool checkForDuplicates(int[] lotto, int r)
        {
            bool found = false;
            foreach (int n in lotto)
                if (r == n)
                {
                    found = true;
                    break;
                }
            return found;
        }
        static void generateRandom(int maxN, int[] lotto, int loopCounter)
        {
            int numbers = 0;
            int r;
            Random randomNumbers = new Random();
            //for (int i = 0; i < loopCounter; i++)
            while (numbers < 5)
            {
                r = randomNumbers.Next(1, maxN);// Select 5 out of 69 white ball numbers, and 1 out of 26 
                bool found = checkForDuplicates(lotto, r);

                // Console.WriteLine($" {r} found is {found}");

                if (!found)
                {
                    lotto[numbers] = r;
                    numbers++;
                }
                else
                    Console.WriteLine("{r} is a duplicate");
            }
        }
        static int oddBall(int maxN)
        {
            Random randomNumbers = new Random();
            int r = randomNumbers.Next(1, maxN);// Select 5 out of 69 white ball numbers, and 1 out of 26 
            Console.Write($"\nThe odd ball is: {r}");
            return r;
        }
        static void Main(string[] args)
        {
            int maxN = 70;
            int[] lotto = new int[5];
            int loopCounter = 5;
            generateRandom(maxN, lotto, loopCounter);
            printTheNumbers(lotto);

            maxN = 27;
            int oddB = oddBall(maxN);

            //generateRandom(maxN, lotto, loopCounter);
        }
    }
}
