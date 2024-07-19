using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class BuiltInAttributeDemo
    {
        // Using Obsolete attribute to mark a method as obsolete
        [Obsolete("This method is obsolete. Use NewMethod instead.")]
        public void OldMethod()
        {
            Console.WriteLine("Old method is called.");
        }

        // Using Conditional attribute to conditionally include a method in debug builds
        [Conditional("DEBUG")]
        public void DebugMethod()
        {
            Console.WriteLine("Debug method is called.");
        }
    }
    class BuiltInAttribute
    {
        static void Main(string[] args)
        {
            // Creating an instance of the Person class
            BuiltInAttributeDemo person = new BuiltInAttributeDemo();

            // Calling the obsolete method
            person.OldMethod(); // Generates a warning due to Obsolete attribute

            // Calling the debug method
            person.DebugMethod(); // This line will only execute in debug builds
        }
    }
}
