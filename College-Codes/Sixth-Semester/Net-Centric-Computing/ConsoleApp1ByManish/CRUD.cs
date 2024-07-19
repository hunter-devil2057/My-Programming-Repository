using Microsoft.Data.SqlClient;
using System;

namespace ConsoleApp1ByManish
{
    public class DbOperations
    {
        public SqlConnection conn = null;
        public void ConnectToDB()
        {
            try
            {
                // Write user name from SSMS software
                string conStr = @"server=DESKTOP-CK1Q8UL\SQLEXPRESS; database=manish; Trusted_Connection=True; TrustServerCertificate=True;";
                conn = new SqlConnection(conStr);
                conn.Open();
                Console.WriteLine("Connection Established");
            }
            catch (SqlException ex)
            {
                Console.WriteLine("Error Connecting: " + ex.Message);
            }
        }
        public void CreateRecord(int id, string name, string address)
        {
            try
            {
                string query = $"INSERT INTO Student VALUES({id}, '{name}', '{address}')";
                SqlCommand sqlcmd = new SqlCommand(query, conn);
                int n = sqlcmd.ExecuteNonQuery();
                Console.WriteLine("Record Created");
            }
            catch (SqlException ex)
            {
                Console.WriteLine("Error Creating: " + ex.Message);
            }
        }
        public void ReadRecord(int id)
        {
            try
            {
                // Write user name from SSMS software
                string query = "SELECT * FROM Student WHERE id=" + id;
                SqlCommand sqlcmd = new SqlCommand(query, conn);
                int n = sqlcmd.ExecuteNonQuery();
                SqlDataReader reader = sqlcmd.ExecuteReader();
                Console.WriteLine("Reading Database");
                while (reader.Read())
                {
                    Console.WriteLine(reader["Id"]);
                    Console.WriteLine(reader["Name"]);
                    Console.WriteLine(reader["Address"]);
                }
                Console.WriteLine("Record Fetched");
                reader.Close();
            }
            catch (SqlException ex)
            {
                Console.WriteLine("Error Reading: " + ex.Message);
            }
        }
        public void UpdateRecord(int id)
        {
            try
            {
                Console.Write("Enter new student name: ");
                string name = Console.ReadLine();
                Console.Write("Enter new student address: ");
                string address = Console.ReadLine();
                // Write user name from SSMS software
                string query = $"UPDATE Student SET name='{name}', address='{address}' WHERE id={id}";
                SqlCommand sqlcmd = new SqlCommand(query, conn);
                int n = sqlcmd.ExecuteNonQuery();
                Console.WriteLine("Record is updated");
            }
            catch (SqlException ex)
            {
                Console.WriteLine("Error Updating: " + ex.Message);
            }
        }
        public void DeleteRecord(int id)
        {
            try
            {
                // Write user name from SSMS software
                string query = "DELETE FROM Student WHERE id=" + id;
                SqlCommand sqlcmd = new SqlCommand(query, conn);
                int n = sqlcmd.ExecuteNonQuery();
                Console.WriteLine("Records is deleted");
            }
            catch (SqlException ex)
            {
                Console.WriteLine("Error Deleting: " + ex.Message);
            }
        }
        public void CloseConnection()
        {
            conn.Close();
        }
    }
}