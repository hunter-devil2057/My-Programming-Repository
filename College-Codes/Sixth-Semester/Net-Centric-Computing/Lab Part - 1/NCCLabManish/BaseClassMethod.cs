using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class BaseClassMethodDemo
    {
        // Method in the base class
        public void DisplayMessage()
        {
            Console.WriteLine("Message from BaseClassMethod");
        }
    }
    // Derived class
    class DerivedClassTwo : BaseClassMethodDemo
    {
        // Method in the derived class that calls base class method using the 'base' keyword
        public void DisplayMessage()
        {
            // Call the base class method using the 'base' keyword
            base.DisplayMessage();
            Console.WriteLine("Message from DerivedClassTwo");
        }
    }

    // Program class with the Main method
    class BaseClassMethod
    {
        static void Main(string[] args)
        {
            // Create an object of the derived class
            DerivedClassTwo derivedObj = new DerivedClassTwo();

            // Call method to display message from the derived class
            derivedObj.DisplayMessage();
        }
    }
}
