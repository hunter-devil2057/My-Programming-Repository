using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    public class MulticasteDelegate
    {
        // Delegate declaration
        public delegate void MyDelegate(string message);

        // Method to be assigned to the delegate
        public static void Method1(string message)
        {
            Console.WriteLine("Method 1: " + message);
        }

        // Another method to be assigned to the delegate
        public static void Method2(string message)
        {
            Console.WriteLine("Method 2: " + message);
        }

        // Main method
        public static void Main(string[] args)
        {
            // Create an instance of the delegate
            MyDelegate delegateInstance = Method1;

            // Add another method to the delegate's invocation list
            delegateInstance += Method2;

            // Call the delegate
            delegateInstance("Hello, World!");
        }
    }
}
