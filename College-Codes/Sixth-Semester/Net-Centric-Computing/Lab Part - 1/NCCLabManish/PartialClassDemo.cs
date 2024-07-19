using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    // Partial class
    public partial class EmployeeDetails
    {
        // Fields
        long contactNumber;
        int empId;
        private String name, address;
        double salary;
        // Constructor
        public EmployeeDetails(int e, string n, string a, long c, double s)
        {
            this.empId = e;
            this.name = n;
            this.salary = s;
            this.address = a;
            this.contactNumber = c;
        }
    }

    // Partial class (continued)
    public partial class EmployeeDetails
    {
        public void ShowEmployeeDetails()
        {
            Console.WriteLine(empId+"\t\t"+name+"\t\t"+address+"\t"+contactNumber+"\t"+salary);
        }
    }

    // Program class with the Main method
    internal class PartialClassDemo
    {
        static void Main(string[] args)
        {
            // Create an instance of the partial class
            Console.WriteLine("\t\t\tDemonstration of Partial Class");
            Console.WriteLine("Employee Id\tName\t\tAddress\t\tContact No.\tSalary");
            EmployeeDetails e1 = new EmployeeDetails(26448, "Manish", "Pepsicola", 9866100200, 25600.25);
            EmployeeDetails e2 = new EmployeeDetails(26449, "Sandhya", "Koteshwor", 9866100200, 25600.25);
            EmployeeDetails e3 = new EmployeeDetails(26450, "Radha", "Baneshwor", 9866100200, 25600.25);
            EmployeeDetails e4 = new EmployeeDetails(26451, "Aakash", "Anamnagar", 9866100200, 25600.25);
            EmployeeDetails e5 = new EmployeeDetails(26452, "Purnika", "Tinkune", 9866100200, 25600.25);
            EmployeeDetails e6 = new EmployeeDetails(26453, "Urmila", "Sallaghari", 9866100200, 25600.25);
            EmployeeDetails e7 = new EmployeeDetails(26448, "Harish", "Gatthaghar", 9866100200, 25600.25);
            e1.ShowEmployeeDetails();
            e2.ShowEmployeeDetails();
            e3.ShowEmployeeDetails();
            e4.ShowEmployeeDetails();
            e5.ShowEmployeeDetails();
            e6.ShowEmployeeDetails();
            e7.ShowEmployeeDetails();
        }
    }
}
