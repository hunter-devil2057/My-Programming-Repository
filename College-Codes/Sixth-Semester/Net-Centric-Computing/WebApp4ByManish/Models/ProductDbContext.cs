using Microsoft.EntityFrameworkCore;
using System.Collections.Generic;
using WebApp4ByManish.Models;

namespace WebApp4ByManish.Models
{
    public class ProductDbContext : DbContext
    {
        // 'DbContext' need 'DbContextOptions' object in order to function
        // 'DbContextOptions' contains configuration info like connection string, DB Provider, etc.
        // Constructor needs to accept 'DbContextOptions' object and pass it to base constructor
        public ProductDbContext(DbContextOptions<ProductDbContext> options) : base(options)
        {

        }
        // Here, 'products' represents the table in DB
        // NOTE: The table should be a property
        public DbSet<Product> Products { get; set; }
    }
}