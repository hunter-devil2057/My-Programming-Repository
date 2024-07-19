using Microsoft.AspNetCore.Mvc;
using WebApiByManish.Models;
using WebApiByManish.Repository;

// For more information on enabling Web API for empty projects, visit https://go.microsoft.com/fwlink/?LinkID=397860

namespace WebApiByManish.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class CollegeController : ControllerBase
    {
        // ****** Dependency Injection of ProductRepo using Interface(IRepository) ******
        private readonly IRepository<College> _collegerepo = null;
        public CollegeController(IRepository<College> collegerepo)
        {
            _collegerepo = collegerepo;
        }

        // GET: api/<CollegeController>
        [HttpGet]
        //public IEnumerable<string> Get()
        public List<College> GetRecords()
        {
            return _collegerepo.GetAllRecords();
            //return new string[] { "value1", "value2" };
        }
        // POST api/<CollegeController>
        // ************ Modify the pre-built method name ***********
        // public void Post([FromBody] string value)
        [HttpPost]
        public void InsertRecord(College clz)
        {
            _collegerepo.AddRecord(clz);
        }
    }
}