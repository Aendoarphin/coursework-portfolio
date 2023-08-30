using System;

namespace ResizeArray
{
    class Program
    {
        static void printArr(string[] array)
        {
            foreach (string name in array)
            {
                Console.WriteLine(name);
            }
        }
        static void Main(string[] args)
        {
            string[] arr1 = { "Jeff", "Mark", "Joe" }; //array of size 3
            Console.WriteLine($"length of array = {arr1.Length}");
            printArr(arr1);

            //resize array
            Array.Resize(ref arr1, arr1.Length + 7);
            int len = arr1.Length;
            Console.WriteLine($"length of array = {len}");
            printArr(arr1);
            
        }
    }
}
