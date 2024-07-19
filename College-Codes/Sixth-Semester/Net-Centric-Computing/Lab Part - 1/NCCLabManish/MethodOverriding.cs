using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class ParentClass
    {
        public virtual void Display()
        {
            Console.WriteLine("Superclass Display Method.");
        }
    }
    class ChildClass: ParentClass
    {
        public override void Display()
        {
            Console.WriteLine("Subclass Display Method.");
        }
    }
    internal class MethodOverriding
    {
        static void Main(string[] args)
        {
            ParentClass obj1 = new ChildClass();
            obj1.Display();
        }
    }
}
