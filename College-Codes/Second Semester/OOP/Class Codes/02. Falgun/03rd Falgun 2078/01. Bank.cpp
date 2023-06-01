//Attributes of Bank : customer name: string, amount: double, setName(string), setBalance(double), getName(), getBalance(), withdraw(double)
#include<iostream>
#include<string>
using namespace std;
class Bank
{
private:
    string name;
    double balance;
public:
    void setName(string n);
    void setBalance(double b);
    string getName();
    double getBalance();
    void withDraw(double amt);
    void deposit(double amt);
    void display();
};

void Bank::setName(string n)
{
    name=n;
}

void Bank::setBalance(double b)
{
    balance = b;
}

string Bank::getName()
{
    return name;
}

double Bank::getBalance()
{
    return balance;
}

void Bank::withDraw(double amt)
{
    if(amt>balance)
    {
        cout<<"Insufficient Balance!!!"<<endl;
    }
    else
    {
        balance=balance-amt;
        cout<<"Rs. "<<amt<<"has been withdrawn from your Account"<<endl;
        cout<<"Available Balance: Rs."<<balance<<endl;
    }
}

void Bank::deposit(double amt)
{
    balance=balance+amt;
    cout<<"After Depositing: Rs."<<amt<<endl;
    cout<<"New Balance: Rs."<<balance<<endl;
}

void Bank::display()
{
    cout<<"Following are the Customer's Details:"<<endl;
    cout<<"Name of Customer:= "<<getName()<<endl;
    cout<<"Available Balance:"<<getBalance()<<endl;
}
int main()
{
    Bank b;
    b.setName("Manish Shiwakoti");
    b.setBalance(0);
    b.display();
    b.withDraw(5000);
    b.deposit(10000);
    b.withDraw(2000);
    b.display();
//    cout<<"Name: "<<b.getName()<<endl<<"Available Balance: "<<b.getBalance()<<endl;
    return 0;
}
