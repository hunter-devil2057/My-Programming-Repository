using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    enum WeekDays { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum Months { Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sept=9, Oct=10, Nov=11, Dec=12}
    internal class EnumerationDemo
    {
        static void Main(string[] args)
        {
            WeekDays d1 = WeekDays.Sunday;
            WeekDays d2 = WeekDays.Monday;
            WeekDays d3= WeekDays.Tuesday;
            WeekDays d4 = WeekDays.Wednesday;
            WeekDays d5 = WeekDays.Thursday;
            WeekDays d6 = WeekDays.Friday;
            WeekDays d7 = WeekDays.Saturday;
            Console.WriteLine("Days of Week: "+d1+" ,"+d2+" ,"+d3+", "+d4+", "+d5+", "+d6+", "+", "+d7);
            Console.WriteLine("No. of Days: \t" + ((int)d1+1) + " \t" + ((int)d2+1) + " \t" + ((int)d3+1) + "\t  " + ((int)d4+1)+"\t\t" + ((int)d5+1) + "\t" + ((int)d6+1) + "\t" + ((int)d7+1));
        }
    }
}
