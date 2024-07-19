using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class StaticPolymorphismDemo
    {
        public void Print(int i)
        {
            Console.WriteLine("Printing Int: {0}", i);
        }

        public void Print(double d)
        {
            Console.WriteLine("Printing Double: {0}", d);
        }

        public void Print(string s)
        {
            Console.WriteLine("Printing String: {0}", s);
        }

        static void Main(string[] args)
        {
            // Create an instance of StaticPolymorphismDemo
            StaticPolymorphismDemo spd = new StaticPolymorphismDemo();
            // Call the overloaded methods
            spd.Print(5);
            spd.Print(9.1);
            spd.Print("Net Centric Computing...");
        }
    }
}