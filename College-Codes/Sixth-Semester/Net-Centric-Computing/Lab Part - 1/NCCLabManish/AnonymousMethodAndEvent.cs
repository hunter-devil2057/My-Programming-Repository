using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    internal class AnonymousMethodAndEvent
    {
        // Define a delegate for the event
        public delegate void EventHandler(string message);

        // Define an event of type EventHandler
        public static event EventHandler MyEvent;

        static void Main(string[] args)
        {
            // Anonymous method assigned to the event
            MyEvent += delegate (string message)
            {
                Console.WriteLine("Anonymous Method: " + message);
            };

            // Fire the event
            MyEvent?.Invoke("Event fired with anonymous method");
        }
    }
}
