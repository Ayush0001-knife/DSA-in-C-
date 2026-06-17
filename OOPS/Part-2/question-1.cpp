#include <iostream>
using namespace std;

// Create a class BankAccount with private attributes accountNumber and
// balance. Implement public methods deposit(), withdraw(), and getBalance() to
// manage the account.

class BankAccount
{
      int accountNumber;
      int balance;

public:
      BankAccount(int num, int bal)
      {
            accountNumber = num;
            balance = bal;
      }
      void deposit(int amount)
      {
            balance += amount;
      }
      void withdraw(int amount)
      {
            balance -= amount;
      }
      void getBalance()
      {
            cout << "Your current account balance is : " << balance << endl;
      }
};

int main()
{
      BankAccount b1(123456789, 50000);
      b1.getBalance();

      return 0;
}