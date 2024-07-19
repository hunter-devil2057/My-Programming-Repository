using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class SuperClass
    {
        public void Display()
        {
            Console.WriteLine("Super Class Display Method.");
        }
    }
    class SubClass: SuperClass
    {
        public new void Display()
        {
            Console.WriteLine("Sub Class Display Method.");
        }
    }
    internal class MethodHiding
    {
        static void Main(string[] args)
        {
            SubClass obj = new SubClass();
            obj.Display();
        }
    }
}
