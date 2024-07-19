using Microsoft.Data.SqlClient;
using Microsoft.EntityFrameworkCore;
using WebApiByManish.Models;
using WebApiByManish.Repository;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container.s
// *********** Add connection string and DB Context ************
string conStr = builder.Configuration.GetConnectionString("myConStr");
builder.Services.AddDbContext<CollegeDbContext>(options => options.UseSqlServer(conStr));
// *********** Add service for repository using dependency injection ************
builder.Services.AddScoped<IRepository<College>, CollegeRepo>();

builder.Services.AddControllers();
// Learn more about configuring Swagger/OpenAPI at https://aka.ms/aspnetcore/swashbuckle
builder.Services.AddEndpointsApiExplorer();
builder.Services.AddSwaggerGen();

var app = builder.Build();

// Configure the HTTP request pipeline.
if (app.Environment.IsDevelopment())
{
    app.UseSwagger();
    app.UseSwaggerUI();
}

app.UseHttpsRedirection();

app.UseAuthorization();

app.MapControllers();

app.Run();