using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

namespace WebApp7ByManish.Pages.User
{
    [Authorize(Roles = "Admin, Member")]
    public class MemberModel : PageModel
    {
        public void OnGet()
        {

        }
    }
}