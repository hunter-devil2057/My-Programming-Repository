using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class NonGenericCollection
    {
        static void Main(string[] args)
        {
            // Create a non-generic ArrayList collection
            ArrayList list = new ArrayList();

            // Add elements to the collection
            list.Add(69);
            list.Add("Good Morning. Have a great day.");
            list.Add(3.14);

            // Display elements in the collection
            Console.WriteLine("Elements in the ArrayList:");
            foreach (var item in list)
            {
                Console.WriteLine(item);
            }
        }
    }
}
