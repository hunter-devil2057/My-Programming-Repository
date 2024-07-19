using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    abstract class ObjShape
    {
        public abstract double Area();
    }
    class Rectangular: ObjShape
    {
        private double length, breadth;
        public Rectangular(double l=0, double b=0)
        {
            length = l;
            breadth = b;
        }
        public override double Area()
        {
            Console.WriteLine("Rectangle Area Class: ");
            return (length * breadth);
        }
    }
    internal class DynamicPolymorphismDemo
    {
        static void Main(string[] args)
        {
            Rectangular r1 = new Rectangular(11.6, 7.9);
            double a=r1.Area();
            Console.WriteLine("Area is: {0}", a);
        }
    }
}
