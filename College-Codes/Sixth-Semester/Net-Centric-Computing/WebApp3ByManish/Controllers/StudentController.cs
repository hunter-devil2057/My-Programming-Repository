using Microsoft.AspNetCore.Mvc;
using WebApp3ByManish.Controllers.Repository;
using WebApp3ByManish.Models;

namespace WebApp3ByGiver.Controllers
{
    public class StudentController : Controller
    {
        // Create object of 'StudentRepo' to use DB reading method
        public StudentRepo _studentRepo = new StudentRepo();
        // GET: StudentController

        public ActionResult Index()
        {
            // Retrive the data from DB before viewing the page
            List<Student>? stds = _studentRepo.GetAllRecord();
            return View(stds);
        }

        // GET: StudentController/Details/5
        public ActionResult Details(int id)
        {
            return View();
        }

        // GET: StudentController/Create
        public ActionResult Create()
        {
            return View();
        }

        // POST: StudentController/Create
        // This method runs when form button submitted to create student
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create(IFormCollection collection)
        {
            try
            {
                Student student = new Student();
                student.Id = Convert.ToInt32(collection["Id"]);
                student.Name = Convert.ToString(collection["Name"]);
                student.Address = Convert.ToString(collection["Address"]);
                _studentRepo.SetStudent(student);
                return RedirectToAction(nameof(Index));
            }
            catch
            {
                return View();
            }
        }

        // GET: StudentController/Edit/5
        public ActionResult Edit(int id)
        {
            return View();
        }

        // POST: StudentController/Edit/5
        // This method runs when Edit form button submitted to edit student
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit(int id, IFormCollection collection)
        {
            try
            {
                // Form data to update the current data
                string newName = Convert.ToString(collection["Name"]);
                string newAddr = Convert.ToString(collection["Address"]);
                _studentRepo.EditStudent(id, newName, newAddr);
                return RedirectToAction(nameof(Index));
            }
            catch
            {
                return View();
            }
        }

        // GET: StudentController/Delete/5
        public ActionResult Delete(int id)
        {
            return View();
        }

        // POST: StudentController/Delete/5
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Delete(int id, IFormCollection collection)
        {
            try
            {
                id = Convert.ToInt32(collection["Id"]);
                _studentRepo.DeleteStudent(id);
                return RedirectToAction(nameof(Index));
            }
            catch
            {
                return View();
            }
        }
    }
}