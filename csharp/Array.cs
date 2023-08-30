using System;

namespace Arrays
{
    class Program
    {
        static void enterData(int[] list, int n) //pass the array and size
        {
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Enter an integer to add to array: ");
                list[i] = int.Parse(Console.ReadLine());
            }
        }
        static void addArray(int[] list1)
        {
            int total = 0;
            foreach (int i in list1) //process all elements; foreach refers to the value
            {
                total += i;
            }
            Console.WriteLine($"Sum of array elements: {total}");
        }
        static void Main(string[] args)
        {
            //double[] array = { 1.1, 1.2, 1.3 }; //defined array
            //int[] list1 = new int[5]; //creates array of 5 elements
            Console.Write("Enter array size to be made: ");
            int n = int.Parse(Console.ReadLine());
            int[] list1 = new int[n]; //make array of specified size
        }
    }
}
