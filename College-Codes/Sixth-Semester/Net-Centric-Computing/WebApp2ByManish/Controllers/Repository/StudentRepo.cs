using Microsoft.Data.SqlClient;
using WebApp2ByManish.Models;

namespace WebApp2ByManish.Controllers.Repository
{
    public class StudentRepo : IRepository<Student>
    {
        // Write user name from SSMS software
        string conStr = @"server=DESKTOP-CK1Q8UL\SQLEXPRESS; database=manish; Trusted_Connection=True; TrustServerCertificate=True;";
        // Read Logic
        public List<Student> GetAllRecords()
        {
            List<Student> listOfStudents = new List<Student>();

            try
            {
                // Write user name from SSMS software
                SqlConnection conn = new SqlConnection(conStr);
                conn.Open();
                Console.WriteLine("Connection Established");

                string selectQuery = "SELECT * FROM Student";
                SqlCommand sqlcmd = new SqlCommand(selectQuery, conn);
                // 'rdr' stores the result of SQL Query
                SqlDataReader rdr = sqlcmd.ExecuteReader();
                Console.WriteLine("Record Retrieved Successfully");

                while (rdr.Read())                      // Just like fallocate() in PHP
                {
                    Student std = new Student();
                    // 'rdr's key is database's table column name
                    std.Id = Convert.ToInt32(rdr["id"]);
                    std.Name = Convert.ToString(rdr["name"]);
                    std.Address = Convert.ToString(rdr["address"]);
                    listOfStudents.Add(std);            // Add DB record in the list
                }
            }
            catch (SqlException ex)
            {
                Console.WriteLine("Error Connecting: " + ex.Message);
            }
            finally
            {
                Console.WriteLine("Read Complete");
            }

            return listOfStudents;
        }
    }
}