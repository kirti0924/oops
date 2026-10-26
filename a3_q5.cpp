/*
5. Create a class Bank Account with:
Private data members:
• accountNo
• balance
Static data member:
• totalAccounts
Implement:
• A constructor to initialize the account details.
• A friend function to display the private account details
• A static member function to display the total number of accounts created
   Create at least three objects and demonstrate both the friend function 
   and static member function.
*/
#include <iostream>
using namespace std;
class BankAccount
{
    private:
    int accountNo;
    float balance;
    public:
    static int totalAccounts;
    BankAccount(int a, float b)
    {
        accountNo = a;
        balance = b;
        totalAccounts++;
    }
    friend void display(BankAccount b);
    static void displayTotal()
    {
        cout << "Total accounts created: " << totalAccounts << endl;
    }
};
int BankAccount::totalAccounts = 0;
void display(BankAccount b)
{
    cout << "Account Number: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
    cout << "................." << endl;
}
int main()
{
    BankAccount b1(101, 5000);
    BankAccount b2(102, 7500);
    BankAccount b3(103, 10000);
    cout << "Account Details:" << endl;
    display(b1);
    display(b2);
    display(b3);
    BankAccount::displayTotal();
    return 0;
}
