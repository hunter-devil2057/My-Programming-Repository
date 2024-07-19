using System.ComponentModel.DataAnnotations;
using Microsoft.AspNetCore.Mvc;

namespace WebApp1ByManish.Models
{
    public class Student
    {
        public int StdID { get; set; }
        [Required(ErrorMessage = "Name is required")]
        public required string Name { get; set; }
        [Required(ErrorMessage = "Address is required")]
        public required string Address { get; set; }
        [Required(ErrorMessage = "Faculty is required")]
        public required string Faculty { get; set; }
    }
}
