using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class MultipleInheritanceUsingInterface
    {
        // Interface for Shape
        public interface IShape
        {
            double Area();
        }

        // Interface for Color
        public interface IColor
        {
            string GetColor();
        }

        // Concrete class implementing IShape and IColor
        public class Rectangle : IShape, IColor
        {
            private double length;
            private double width;
            private string color;

            public Rectangle(double l, double w, string c)
            {
                length = l;
                width = w;
                color = c;
            }

            public double Area()
            {
                return length * width;
            }

            public string GetColor()
            {
                return color;
            }
        }

        static void Main(string[] args)
        {
            // Create an object of the Rectangle class
            Rectangle rectangle = new Rectangle(15, 9, "Red");

            // Call methods from both interfaces
            double area = rectangle.Area();
            string color = rectangle.GetColor();

            // Output the results
            Console.WriteLine("Area of the rectangle: " + area);
            Console.WriteLine("Color of the rectangle: " + color);
        }
    }
}
