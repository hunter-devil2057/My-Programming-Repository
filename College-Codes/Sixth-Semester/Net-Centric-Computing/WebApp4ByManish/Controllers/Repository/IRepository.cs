namespace WebApp4ByManish.Controllers.Repository
{
    public interface IRepository<T>
    {
        // 'AddRecord()' returns void because there is no data manipulation
        public void AddRecord(T model);
        // 'GetAllRecords()' returns 'List<T>' because there is data fetch and needs to be returned
        public List<T> GetAllRecords();
        // 'UpdateRecord()' returns 'T' because there is data fetch and needs to be returned
        public T GetSingleRecord(int id);
        // 'UpdateRecord()' returns 'T' because there is data manipulation
        public T UpdateRecord(T model);
        // 'UpdateRecord()' returns void because there is no data manipulation
        public void DeleteRecord(T model);
    }
}