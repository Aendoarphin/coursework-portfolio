using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InheritanceShapesHW
{
    class Circle : Shape
    {
        public double calculateArea()
        {
            return Math.Pow(radius, 2) * Math.PI;
        }
        public double calculateDiameter()
        { 
            return radius * 2;
        }
        public double calculateCircum()
        {
            return 2 * Math.PI * radius;
        }
    }
}
