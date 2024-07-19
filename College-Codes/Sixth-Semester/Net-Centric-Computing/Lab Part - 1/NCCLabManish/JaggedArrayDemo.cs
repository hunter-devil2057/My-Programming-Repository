using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class JaggedArrayDemo
    {
        static void Main(string[] args)
        {
            // Define a jagged array of strings to store grocery items
            string[][] groceryItems =
            {
                new string[] { "Apples", "Bananas", "Oranges" },        // Fruits aisle
                new string[] { "Bread", "Milk", "Eggs", "Butter" },     // Dairy aisle
                new string[] { "Rice", "Pasta", "Flour", "Beans" },     // Grains aisle
                new string[] { "Chicken", "Beef", "Fish" }              // Meat aisle
            };

            // Display the grocery items aisle by aisle
            for (int list = 0; list < groceryItems.Length; list++)
            {
                Console.WriteLine($"List No. {list + 1}:");
                foreach (var item in groceryItems[list])
                {
                    Console.WriteLine($"- {item}");
                }
                Console.WriteLine();
            }
        }
    }
}
