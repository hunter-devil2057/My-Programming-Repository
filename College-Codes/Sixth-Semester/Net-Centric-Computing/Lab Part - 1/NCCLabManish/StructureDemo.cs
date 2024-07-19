using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class StructureDemo
    {
        // Define a structure for representing a Point in 2D space
        public struct Point
        {
            public int X;
            public int Y;

            // Constructor
            public Point(int x, int y)
            {
                X = x;
                Y = y;
            }

            // Method to display the point
            public void Display()
            {
                Console.WriteLine($"Point coordinates: ({X}, {Y})");
            }
        }

        static void Main(string[] args)
        {
            // Create an instance of the Point struct
            Point point = new Point(69, 79);

            // Display the point coordinates
            point.Display();
        }
    }
}
