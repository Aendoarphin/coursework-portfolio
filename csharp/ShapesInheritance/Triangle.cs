using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InheritanceShapesHW
{
    class Triangle : Shape
    {
        public double calculateArea()
        {
                return .5 * tbase * height;
        }
    }
}
