using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class BaseClassConstructorDemo
    {
        // Field in the base class
        protected int baseField;

        // Base class constructor
        public BaseClassConstructorDemo(int value)
        {
            baseField = value;
        }

        // Method in the base class
        public void DisplayBaseField()
        {
            Console.WriteLine($"Base Field: {baseField}");
        }
    }
    // Derived class
    class DerivedClassThree : BaseClassConstructorDemo
    {
        // Derived class constructor
        public DerivedClassThree(int value) : base(value)
        {
            // Call the base class constructor using the 'base' keyword
            // and pass the value to initialize the baseField
        }
    }

    // Program class with the Main method
    class BaseClassConstructor
    {
        static void Main(string[] args)
        {
            // Create an object of the derived class
            DerivedClassThree derivedObj = new DerivedClassThree(69);

            // Call method to display base class field from the derived class
            derivedObj.DisplayBaseField();
        }
    }
}

