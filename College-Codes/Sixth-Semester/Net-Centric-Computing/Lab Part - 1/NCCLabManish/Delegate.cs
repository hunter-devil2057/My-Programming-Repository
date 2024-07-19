using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    // Delegate declaration
    public delegate void MyDelegate(string message);

    // Class to demonstrate delegates
    public class Delegate
    {
        // Method to be assigned to the delegate
        public static void DisplayMessage(string message)
        {
            Console.WriteLine("Message from the delegate: " + message);
        }

        // Main method
        public static void Main(string[] args)
        {
            // Create an instance of the delegate
            MyDelegate delegateInstance = new MyDelegate(DisplayMessage);

            // Call the delegate
            delegateInstance("Hello, World!");
        }
    }
}
