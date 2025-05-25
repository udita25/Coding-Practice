// Create a BankAccount class with deposit, withdraw, and check balance methods.
#include<iostream>
#include<string>
using namespace std;

class BankAccount {
    private:
    string accountNumber;
    string ownername;
    double balance;

    public:
    BankAccount(string accountNumber, string ownername, double balance = 0.0){
        this->accountNumber = accountNumber;
        this->ownername = ownername;
        this->balance = balance;
    }

    void deposit(double amount){
        balance += amount;
        cout<<"Deposited Rs."<< amount <<"\n New balance: Rs."<< balance <<endl;
    }

    void withdraw(double amount){
        if(amount > balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            balance -= amount;
            cout<<"Withdrew Rs."<< amount << "\nNew balance: "<<balance<<endl;
        }
    }

    void checkbal(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Owner Name: "<<ownername<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};

int main()
{
    BankAccount account1("1234567890", "John Doe", 1000.0);
    account1.checkbal();
    cout<<"****************************"<<endl;
    account1.deposit(500.0);
        cout<<"****************************"<<endl;
    account1.withdraw(200.0);
        cout<<"****************************"<<endl;
    account1.checkbal();

return 0;
}