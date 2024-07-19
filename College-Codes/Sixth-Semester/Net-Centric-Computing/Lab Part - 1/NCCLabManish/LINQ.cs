using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class LINQ
    {
        static void Main(string[] args)
        {
            // Sample list of numbers
            List<int> numbers = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            // LINQ query to filter even numbers
            var evenNumbers = from num in numbers
                              where num % 2 == 0
                              select num;

            // Displaying even numbers using LINQ query
            Console.WriteLine("Even numbers using LINQ:");
            foreach (var num in evenNumbers)
            {
                Console.Write(num + " ");
            }
            Console.WriteLine();
        }
    }
}
