// Abstract Data Types 

#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount(float initial_balance)
    {
        balance = initial_balance;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << fixed << setprecision(2);
            cout << "Deposited amount: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << fixed << setprecision(2);
            cout << "Withdrawn amount: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds or invalid withdrawal amount!" << endl;
        }
    }

    void getBalance() const
    {
        cout << fixed << setprecision(2);
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount myAccount(1000);
    myAccount.deposit(500);    
    myAccount.withdraw(200);   
    myAccount.getBalance();     

    return 0;
}

