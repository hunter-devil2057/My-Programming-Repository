using System;
namespace ConsoleApp1ByManish
{
    public class Program
    {
        public static void Main(string[] args)
        {
            DbOperations ops = new DbOperations();
            ops.ConnectToDB();
            int id;
            string name, address;

            while (true)
            {
                Console.WriteLine("1. Create Student Record");
                Console.WriteLine("2. Read Student Record");
                Console.WriteLine("3. Update Student Record");
                Console.WriteLine("4. Delete Student Record");
                Console.WriteLine("5. Exit");
                Console.Write("Enter Your Choice: ");
                string choice = Console.ReadLine();

                if (choice == "5") break;
                // Common Statement 
                Console.Write("Enter Student ID: ");
                id = Convert.ToInt32(Console.ReadLine());
                switch (choice)
                {
                    case "1":
                        Console.Write("Enter Student Name: ");
                        name = Console.ReadLine();
                        Console.Write("Enter Student Address: ");
                        address = Console.ReadLine();

                        ops.CreateRecord(id, name, address);
                        break;
                    case "2":
                        ops.ReadRecord(id);
                        break;
                    case "3":
                        Console.WriteLine("Current Record: ");
                        ops.ReadRecord(id);
                        ops.UpdateRecord(id);
                        break;
                    case "4":
                        Console.WriteLine("Current Record: ");
                        ops.ReadRecord(id);
                        ops.DeleteRecord(id);
                        break;
                    case "5":
                        break;
                    default:
                        Console.WriteLine("Invalid Choice!");
                        break;
                }
            }
            ops.CloseConnection();
        }
    }
}