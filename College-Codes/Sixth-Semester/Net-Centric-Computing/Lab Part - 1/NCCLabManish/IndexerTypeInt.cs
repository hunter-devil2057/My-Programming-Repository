using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class IndexerTypeInt
    {
        private int[] data = new int[5];

        // Indexer when index is of int type
        public int this[int index]
        {
            get { return data[index]; }
            set { data[index] = value; }
        }

        static void Main(string[] args)
        {
            IndexerTypeInt demo = new IndexerTypeInt();

            // Using indexers with int type index
            demo[0] = 59;
            demo[1] = 69;
            demo[2] = 79;

            // Displaying values
            Console.WriteLine("Values with int index:");
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine($"Index {i}: {demo[i]}");
            }
        }
    }
}
