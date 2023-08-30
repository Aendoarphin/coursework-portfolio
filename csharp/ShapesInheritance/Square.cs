using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InheritanceShapesHW
{
    class Square : Rectangle
    {
        public double calculateArea()
        {
            return Math.Pow(height, 2);
        }
        public double calculatePerimeter()
        {
            return height * 4;
        }
    }
}
