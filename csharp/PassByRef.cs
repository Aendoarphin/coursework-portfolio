using System;

namespace PassByRef
{
    class Program
    {
        static void changeVals(ref int x, ref int y, ref double z) //pass by ref
        {
            x *= 100; y *= 100; z += 2;
        }
        static void Main(string[] args)
        {
            int x = 7;
            int y = 9;
            double z = 3.12;
            changeVals(ref x, ref y, ref z);
            Console.WriteLine($"x = {x}, y = {y} and z {z}");
            Console.ReadKey();
        }
    }
}
