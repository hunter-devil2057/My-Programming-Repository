using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    class ParameterizedConstructorDemo
    {
        string name;
        double salary;
        public ParameterizedConstructorDemo(string n, double s)
        {
            name = n;
            salary = s;
        }
        public void Display()
        {
            Console.WriteLine("Name : " + name);
            Console.WriteLine("Salary : " + salary);
        }
        static void Main(string[] args)
        {
            ParameterizedConstructorDemo pcd1, pcd2;
            pcd1 = new ParameterizedConstructorDemo("Ram", 75500.50);
            pcd2 = new ParameterizedConstructorDemo("Krishna", 65500.50);
            pcd1.Display();
            pcd2.Display();
        }
    }
}