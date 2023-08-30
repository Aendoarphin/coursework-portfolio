using System;
using System.Collections.Generic;
using System.Text;

namespace InheritanceShapesHW
{
    class Shape
    {
        protected double width;
        protected double height;
        protected double radius;
        protected double diameter;
        protected double tbase;
        
        public void setWidth(double width)
        {
            this.width = width;
        }
        public void setHeight(double height)
        {
            this.height = height;
        }
        public void setRadius(double radius)
        {
            this.radius = radius;
        }
        public void setBase(double tbase)
        {
            this.tbase = tbase;
        }
        public void setDiameter(double diameter)
        {
            this.diameter = diameter;
        }
    }
}
