using System.ComponentModel.DataAnnotations;

namespace WebApp3ByManish.Models
{
    public class Student
    {
        [Required]
        public int Id { get; set; }
        [Required]
        [StringLength(60, MinimumLength = 2, ErrorMessage = "Name length should be within 2 and 60")]
        public string Name { get; set; }
        public string Address { get; set; }
    }
}