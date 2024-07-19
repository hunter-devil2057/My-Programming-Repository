using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class FunctionDelegate
    {
        // Method to add two integers
        public static int Add(int a, int b)
        {
            return a + b;
        }

        // Method to subtract two integers
        public static int Subtract(int a, int b)
        {
            return a - b;
        }

        // Main method
        public static void Main(string[] args)
        {
            // Func delegate declaration (takes two int parameters and returns int)
            Func<int, int, int> operation;

            // Assign the Add method to the delegate
            operation = Add;

            // Call the delegate with arguments 5 and 3
            int result1 = operation(15, 43);
            Console.WriteLine("Addition result: " + result1);

            // Assign the Subtract method to the delegate
            operation = Subtract;

            // Call the delegate with arguments 5 and 3
            int result2 = operation(23, 17);
            Console.WriteLine("Subtraction result: " + result2);
        }
    }
}
