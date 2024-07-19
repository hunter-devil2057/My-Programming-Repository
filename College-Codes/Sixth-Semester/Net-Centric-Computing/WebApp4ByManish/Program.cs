using Microsoft.EntityFrameworkCore;
using WebApp4ByManish.Controllers.Repository;
using WebApp4ByManish.Models;

var builder = WebApplication.CreateBuilder(args);

// Declare connection string from appsetting.json
var conStr = builder.Configuration.GetConnectionString("myConStr");

// Add services to the container.
builder.Services.AddControllersWithViews();

// ******* Add DB Context Options with mentioning DB Provider and Connection String *******
builder.Services.AddDbContext<ProductDbContext>(options => options.UseSqlServer(conStr));
//builder.Services.AddDbContext<ProductDbContext>(options => options.UseSqlServer(conStr), ServiceLifetime.Scoped);
// ******* Dependency Injection *******
builder.Services.AddScoped<IRepository<Product>, ProductRepo>();

var app = builder.Build();

// Configure the HTTP request pipeline.
if (!app.Environment.IsDevelopment())
{
    app.UseExceptionHandler("/Home/Error");
    // The default HSTS value is 30 days. You may want to change this for production scenarios, see https://aka.ms/aspnetcore-hsts.
    app.UseHsts();
}

app.UseHttpsRedirection();
app.UseStaticFiles();

app.UseRouting();

app.UseAuthorization();

app.MapControllerRoute(
    name: "default",
    pattern: "{controller=Home}/{action=Index}/{id?}");

app.Run();