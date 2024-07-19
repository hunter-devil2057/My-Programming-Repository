using WebApp4ByManish.Models;

namespace WebApp4ByManish.Controllers.Repository
{
    public class ProductRepo : IRepository<Product>
    {
        // Dependency Injection 
        ProductDbContext _context = null;
        public ProductRepo(ProductDbContext context)
        {
            _context = context;
        }
        // Interface Implementation
        public void AddRecord(Product model)
        {
            // Add the product from the context. Here, still DB is not updated
            _context.Add(model);
            // Use 'SaveChanges()' method if any data modifications are done
            _context.SaveChanges();
        }

        public void DeleteRecord(Product model)
        {
            _context.Remove(model);
            _context.SaveChanges();
        }

        public List<Product> GetAllRecords()
        {
            List<Product> allProducts = _context.Products`.ToList();
            return allProducts;

        }

        public Product GetSingleRecord(int id)
        {
            // Similar tp using 'WHERE' clause in SQL to find based on 'id'
            Product p = _context.Products.Find(id);
            return p;
        }

        public Product UpdateRecord(Product model)
        {
            _context.Update(model);
            _context.SaveChanges();
            return model;
        }
    }
}