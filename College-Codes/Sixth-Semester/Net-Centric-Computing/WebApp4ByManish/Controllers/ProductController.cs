using Microsoft.AspNetCore.Mvc;
using WebApp4ByManish.Controllers.Repository;
using WebApp4ByManish.Models;

namespace WebApp4ByManish.Controllers
{
    public class ProductController : Controller
    {
        // ****** Dependency Injection of ProductRepo using Interface(IRepository) ******
        private readonly IRepository<Product> _repo = null;
        public ProductController(IRepository<Product> repo)
        {
            _repo = repo;
        }
        // GET: ProductController
        public ActionResult Index()
        {
            // ****** Use ProductRepo to get all records ******
            return View(_repo.GetAllRecords());
            //return View();
        }

        // GET: ProductController/Details/5
        public ActionResult Details(int id)
        {
            // ****** Use ProductRepo to get single record ******
            return View(_repo.GetSingleRecord(id));
        }

        // GET: ProductController/Create
        public ActionResult Create()
        {

            return View();
        }

        // POST: ProductController/Create
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create(Product prod)
        {
            try
            {
                if (ModelState.IsValid)    // Check validity of model before performing operation 
                {
                    // ****** Use ProductRepo to add record ******
                    _repo.AddRecord(prod);
                    // 'TempData[]' is globally accessible in ASP.NET. We set it to non-null
                    TempData["success_on_insert"] = "Inserted";
                    // Go back to index page by setting 'TempData[]'
                    return RedirectToAction("Index");
                }
                else
                {
                    return View(prod);
                }
            }
            catch (Exception ex)
            {
                return Content("Something went wrong when inserting record: " + ex.Message);
            }
        }

        // GET: ProductController/Edit/5
        public ActionResult Edit(int id)
        {
            // ****** Use ProductRepo to edit single record ******
            return View(_repo.GetSingleRecord(id));
        }

        // POST: ProductController/Edit/5
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit(int id, IFormCollection collection)
        {
            // Here, simply providing the product object will overwrite the previous product object with same ID
            Product prod = _repo.GetSingleRecord(id);
            // Modify the product object according to form data
            prod.Name = Convert.ToString(collection["Name"]);
            prod.Price = Convert.ToDouble(collection["Price"]);
            prod.Description = Convert.ToString(collection["Description"]);
            try
            {
                if (ModelState.IsValid)
                {
                    // ****** Use ProductRepo to update record ******
                    _repo.UpdateRecord(prod);
                    TempData["success_on_edit"] = "Edited";
                    return RedirectToAction("Index");
                }
                else
                {
                    return View(prod);
                }
            }
            catch (Exception ex)
            {
                return Content("Something went wrong when updating record: " + ex.Message);
            }
        }

        // GET: ProductController/Delete/5
        public ActionResult Delete(int id)
        {
            // ****** Use ProductRepo to delete single record ******
            return View(_repo.GetSingleRecord(id));
        }

        // POST: ProductController/Delete/5
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Delete(int id, IFormFileCollection collection)
        {
            // Simply, get the product object using ProductRepo method
            Product prod = _repo.GetSingleRecord(id);
            try
            {
                if (ModelState.IsValid)
                {
                    // ****** Use ProductRepo to delete record ******
                    _repo.DeleteRecord(prod);
                    TempData["success_on_delete"] = "Deleted";
                    return RedirectToAction("Index");
                }
                else
                {
                    return View(prod);
                }
            }
            catch (Exception ex)
            {
                return Content("Something went wrong when deleting record: " + ex.Message);
            }
        }
    }
}