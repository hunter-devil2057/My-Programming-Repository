using WebApiByManish.Models;

namespace WebApiByManish.Repository
{
    public class CollegeRepo : IRepository<College>
    {
        // Dependency Injection 
        CollegeDbContext _context = null;
        public CollegeRepo(CollegeDbContext context)
        {
            _context = context;
        }
        // Interface Implementation
        public void AddRecord(College model)
        {
            // Add the College from the context. Here, still DB is not updated
            _context.Add(model);
            // Use 'SaveChanges()' method if any data modifications are done
            _context.SaveChanges();
        }

        public List<College> GetAllRecords()
        {
            List<College> allColleges = _context.Colleges.ToList();
            return allColleges;
        }
    }
}