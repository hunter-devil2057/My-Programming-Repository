using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class StaticConstructor
    {
        static int count;
        public StaticConstructor()
        {
            Console.WriteLine("Hello from Instance Constructor");
            count++;
        }
        static StaticConstructor()
        {
            Console.WriteLine("Hello from Static Constructor");
            count = 400;
        }
        static void Main(string[] args)
        {
            StaticConstructor d1 = new StaticConstructor();
            Console.WriteLine("Hello from main");
            Console.WriteLine("value of count= " + count);
            StaticConstructor d2 = new StaticConstructor();
            Console.WriteLine("value of count= " + count);
        }
    }
}
