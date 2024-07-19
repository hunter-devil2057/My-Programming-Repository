using Microsoft.AspNetCore.Mvc;
using WebApp6ByManish.Models;

namespace WebApp6ByManish.Controllers
{
    public class QueryStringController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }
        public IActionResult GetQueryString(string name, int age)
        {
            User newUser = new User()
            {
                Name = name,
                Age = age
            };
            return View(newUser);
        }
    }
}