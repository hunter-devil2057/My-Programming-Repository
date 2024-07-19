using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    public class LINQWithLambda
    {
        public static void Main(string[] args)
        {
            List<int> nums = new List<int>() { 1, 2, 3, 4, 5 };
            // Lambda Expression inside LINQ 'Where()' method used as condition
            List<int> res = nums.Where(x => x > 2).ToList();
            foreach (int i in res)
            {
                Console.WriteLine(i);
            }
        }
    }
}