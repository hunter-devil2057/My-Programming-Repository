using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    public class Animal
    {
        public string color = "white";
    }
    public class Dog: Animal
    {
        string color = "black";
        public void DisplayColor()
        {
            Console.WriteLine(base.color);
            Console.WriteLine(color);
        }
    }
    public class BaseClassFieldDemo
    {
        public static void Main(string[] args)
        {
            Dog d = new Dog();
            d.DisplayColor();
        }
    }
}
