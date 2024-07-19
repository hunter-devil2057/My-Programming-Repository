using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class Counter
    {
        private Counter() { }
        public static int cnt;
        public static int IncrementCount()
        {
            return ++cnt;
        }
    }
    class PrivateConstructorDemo
    {
        static void Main(string[] args)
        {
            // If you uncomment the following statement, it willgenerate
            // an error because the constructor is inaccessible:
            // Counter aCounter = new Counter(); // Error
            Counter.cnt = 500;
            Counter.IncrementCount();
            Console.WriteLine("Now the value of cnt = {0}", Counter.cnt);
        }
    }
}