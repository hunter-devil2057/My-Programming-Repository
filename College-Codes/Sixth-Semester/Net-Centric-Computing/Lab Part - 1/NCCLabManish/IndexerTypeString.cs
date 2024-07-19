using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class IndexerTypeString
    {
        private string[] data = new string[5];

        // Indexer when index is of string type
        public string this[string index]
        {
            get { return data[Convert.ToInt32(index)]; }
            set { data[Convert.ToInt32(index)] = value; }
        }

        static void Main(string[] args)
        {
            IndexerTypeString demo = new IndexerTypeString();

            // Using indexers with string type index
            demo["0"] = "Rimuru";
            demo["1"] = "Baji";
            demo["2"] = "Condoriano";

            // Displaying values
            Console.WriteLine("Values with string index:");
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine($"Index {i}: {demo[i.ToString()]}");
            }
        }
    }
}
