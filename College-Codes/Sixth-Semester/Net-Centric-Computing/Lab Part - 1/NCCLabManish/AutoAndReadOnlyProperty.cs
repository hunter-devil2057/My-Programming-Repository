using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class Person
    {
        // Auto-implemented property with public getter and setter
        public string Name { get; set; }

        // Read-only auto-implemented property
        public int Age { get; }

        // Constructor to initialize read-only property
        public Person(string name, int age)
        {
            Name = name;
            Age = age;
        }

        // Display person details
        public void Display()
        {
            Console.WriteLine("Name: {0}", Name);
            Console.WriteLine("Age: {0}", Age);
        }
    }

    class AutoAndReadOnlyProperty
    {
        static void Main(string[] args)
        {
            // Creating a new person object
            Person person = new Person("Manish Shiwakoti", 22);

            // Display person details
            person.Display();

            // Updating the Name property
            person.Name = "Rishi Raj Adhikari";

            // The following line would cause a compilation error because Age is read-only
            // person.Age = 31;

            // Display updated person details
            person.Display();
        }
    }
}