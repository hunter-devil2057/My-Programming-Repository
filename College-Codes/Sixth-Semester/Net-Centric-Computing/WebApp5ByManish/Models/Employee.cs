using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;

namespace WebApp5ByManish.Models;

public partial class Employee
{
    [Key]
    [Required]
    public int EmpId { get; set; }

    public string? EmpName { get; set; }

    public decimal? Salary { get; set; }
}