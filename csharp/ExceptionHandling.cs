using System;

namespace ExceptionHandlingArrayOutOfBound
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("What's nine plus ten: ");
            int theAnswer = 21;

            try
            {
                int userAnswer = int.Parse(Console.ReadLine());

                if (userAnswer == theAnswer)
                {
                    Console.WriteLine("Correct!");
                }
                else
                {
                    Console.WriteLine("Incorrect!");
                }
            }
            catch (FormatException)
            {
                Console.WriteLine("Invalid input. Please enter a valid integer.");
            }
        }
    }
}
