using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net.Http;

namespace NCCLabManish
{
    public class AsynchronousProgramming
    {
        public static async Task MethodA()
        {
            await Task.Run(() => {
                for (int i = 0; i < 100; i++)
                {
                    Console.WriteLine("This is Method A");
                }
            });
        }
        public static void MethodB()
        {
            for (int i = 0; i < 20; i++)
            {
                Console.WriteLine("This is Method B");
            }
        }
        static void Main(string[] args)
        {
            MethodA();
            MethodB();
        }
    }
}