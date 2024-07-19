using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    // Define a custom attribute class
    [AttributeUsage(AttributeTargets.Class | AttributeTargets.Method)]
    public class CustomAttribute : Attribute
    {
        public string Description { get; }

        public CustomAttribute(string description)
        {
            Description = description;
        }

        // Main method inside the CustomAttribute class
        public static void Main(string[] args)
        {
            // Create an instance of TestClass
            TestClass test = new TestClass();
            test.TestMethod();

            // Retrieve and display custom attributes applied to the class
            Type type = typeof(TestClass);
            var classAttributes = type.GetCustomAttributes(typeof(CustomAttribute), false);
            foreach (CustomAttribute attr in classAttributes)
            {
                Console.WriteLine($"Class Attribute Description: {attr.Description}");
            }

            // Retrieve and display custom attributes applied to the method
            var methodAttributes = type.GetMethod("TestMethod").GetCustomAttributes(typeof(CustomAttribute), false);
            foreach (CustomAttribute attr in methodAttributes)
            {
                Console.WriteLine($"Method Attribute Description: {attr.Description}");
            }
        }
    }

    // Apply the custom attribute to a class
    [CustomAttribute("This is a test class.")]
    public class TestClass
    {
        // Apply the custom attribute to a method
        [CustomAttribute("This is a test method.")]
        public void TestMethod()
        {
            Console.WriteLine("Executing TestMethod.");
        }
    }
}
