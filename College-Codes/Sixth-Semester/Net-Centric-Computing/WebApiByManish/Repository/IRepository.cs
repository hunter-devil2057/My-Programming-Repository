namespace WebApiByManish.Repository
{
    public interface IRepository<T>
    {
        // 'AddRecord()' returns void because there is no data manipulation
        public void AddRecord(T model);
        // 'GetAllRecords()' returns 'List<T>' because there is data fetch and needs to be returned
        public List<T> GetAllRecords();
    }
}