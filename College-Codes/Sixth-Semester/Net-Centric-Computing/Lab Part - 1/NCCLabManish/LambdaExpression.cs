using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    public delegate double MyDel(double value);
    public class LambdaExpression
    {
        public static void Main(string[] args)
        {
            double num = 5.6d;
            // Lambda Expression
            MyDel md2 = (x) =>
            {
                Console.Write("Thus, the Square Value is: ");
                return x * x;
            };
            double square = md2(num);
            Console.WriteLine(square);
        }
    }
}