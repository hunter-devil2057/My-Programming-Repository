using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System;

namespace NCCLabManish
{
    public class MyClass<T>                        // Generic Class
    {
        public T? value;                            // Generic Field
        public void Sum(T x, T y)                   // Generic Method
        {
            dynamic a = x;
            dynamic b = y;
            Console.WriteLine($"Sum is: {a + b}");
        }
    }
    public class GenericClassWithFieldAndMethod
    {
        public static void Main(string[] args)
        {
            MyClass<int> m1 = new MyClass<int>();       // The object is of type 'int' now
            m1.Sum(5, 6);
            m1.value = 5;
            Console.WriteLine(m1.value);

            MyClass<string> m3 = new MyClass<string>();   // The object is of type 'float' now
            m3.Sum("Hello", "World");
            m3.value = "Greeting";
            Console.WriteLine(m3.value);
        }
    }
}