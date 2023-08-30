using System;
using System.Collections.Generic;
using System.Text;

namespace InheritanceShapesHW
{
    class Rectangle : Shape
    {
        public double calculateArea()
        {
            return (width * height);
        }

        public double calculatePerimeter()
        {
            return (width * 2) + (height * 2);
        }
    }
}
