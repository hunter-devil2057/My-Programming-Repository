using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class CopyConstructorDemo
    {
        int num1, num2;
        public CopyConstructorDemo(int x, int y)
        {
            num1 = x;
            num2 = y;
        }
        // Declaring copy constructor
        public CopyConstructorDemo(CopyConstructorDemo obj)
        {
            num1 = obj.num1;
            num2 = obj.num2;
        }
        public void Display()
        {
            Console.WriteLine("num1 = {0} and num2 = {1}", num1, num2);
        }
        static void Main(string[] args)
        {
            // Creates a new object ccd1
            CopyConstructorDemo ccd1 = new CopyConstructorDemo(4, 7);
            // Details of ccd1 is copied to ccd2
            CopyConstructorDemo ccd2 = new CopyConstructorDemo(ccd1);
            Console.WriteLine("Detail of ccd1 object");
            ccd1.Display();
            Console.WriteLine("Detail of ccd2 object");
            ccd2.Display();
        }
    }
}