using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class InterfaceDemo
    {
        // Interface
        public interface IShape
        {
            // Interface method
            double Area();
        }

        // Concrete class implementing the interface
        class Rectangle : IShape
        {
            // Fields
            private double length;
            private double width;

            // Constructor
            public Rectangle(double l, double w)
            {
                length = l;
                width = w;
            }

            // Implementing the method from the interface
            public double Area()
            {
                return length * width;
            }
        }

        static void Main(string[] args)
        {
            // Create an object of the derived class
            Rectangle rectangle = new Rectangle(23, 13);

            // Call the method
            double area = rectangle.Area();
            Console.WriteLine("Area of the rectangle: " + area);
        }
    }
}
