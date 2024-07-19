using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class DefaultConstructor
    {
        int id;
        string Name;
        //DefaultConstructor() is a constructor of a class DefaultConstructor
        public DefaultConstructor()
        {
            Console.WriteLine("Hello, This is Default Constructor.");
            id = 747701;
            Name = "Manish Shiwakoti";
        }
        static void Main(string[] args)
        {
            //Creating Object of class Constructor
            DefaultConstructor demo = new DefaultConstructor();
            Console.WriteLine("Id: "+demo.id);
            Console.WriteLine("Name: " + demo.Name);
        }
    }
}
