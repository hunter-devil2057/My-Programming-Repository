using Microsoft.EntityFrameworkCore;
using System.Collections.Generic;

namespace WebApiByManish.Models
{
    public class CollegeDbContext : DbContext
    {
        public CollegeDbContext(DbContextOptions<CollegeDbContext> options) : base(options) { }

        public DbSet<College> Colleges { get; set; }
    }
}