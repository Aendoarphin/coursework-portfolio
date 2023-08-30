//30 points
//due date; Tuesday: April 26
//Add three more subclasses to the shape code (attached)  to calculate the area of cricle, square, and triangle (with right angle)
using System;

namespace InheritanceShapesHW
{
    class Program
    {
        static void Main(string[] args)
        {
            double w, h, r, b;

            try
            {
                Console.Write("Enter the width of the rectangle: ");
                w = double.Parse(Console.ReadLine());
                Console.Write("Enter the height of the rectangle:");
                h = double.Parse(Console.ReadLine());
                Rectangle myRectangle = new Rectangle();
                myRectangle.setWidth(w);
                myRectangle.setHeight(h);
                Console.WriteLine($"Area of rectangle with width {w} and height {h} = {myRectangle.calculateArea()}");

                Console.WriteLine();

                Console.Write("Enter the radius of the circle: ");
                r = double.Parse(Console.ReadLine());
                Circle myCircle = new Circle();
                myCircle.setRadius(r);
                Console.WriteLine($"Area of circle with radius {r} = {myCircle.calculateArea()}");
                Console.WriteLine($"Diameter of circle with radius {r} = {myCircle.calculateDiameter()}");
                Console.WriteLine($"Circumference of circle with radius {r} = {myCircle.calculateCircum()}");

                Console.WriteLine();

                Console.Write("Enter the height of the square: ");
                h = double.Parse(Console.ReadLine());
                Square mySquare = new Square();
                mySquare.setHeight(h);
                Console.WriteLine($"Area square with height {h} = {mySquare.calculateArea()}");

                Console.WriteLine();

                Console.Write("Enter the height of the triangle: ");
                h = double.Parse(Console.ReadLine());
                Console.Write("Enter the base of the triangle: ");
                b = double.Parse(Console.ReadLine());
                Triangle myTriangle = new Triangle();
                myTriangle.setBase(b);
                myTriangle.setHeight(h);
                Console.WriteLine($"Area triangle with base {b} and height {h} =  {myTriangle.calculateArea()}");
            }
            catch (FormatException e)
            {
                Console.WriteLine(e.Message);
            }
        }
    }
}
