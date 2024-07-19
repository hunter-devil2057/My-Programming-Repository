using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class GenericCollection
    {
        static void Main(string[] args)
        {
            // Create a generic List collection of integers
            List<int> numbers = new List<int>();

            // Add elements to the collection
            numbers.Add(69);
            numbers.Add(79);
            numbers.Add(89);

            // Display elements in the collection
            Console.WriteLine("Elements in the List:");
            foreach (var number in numbers)
            {
                Console.WriteLine(number);
            }
        }
    }
}
