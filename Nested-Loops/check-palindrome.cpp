#include <iostream>
using namespace std;

int main()
{
      int n;
      cout << "Enter a number: ";
      cin >> n;

      int newNum = 0;
      int originalNumber = n;

      while (n > 0)
      {
            int lastDigit = n % 10;
            newNum = newNum * 10 + lastDigit;
            n /= 10;
      }

      if (originalNumber == newNum)
      {
            cout << "It is a Palindrome ";
      }
      else
      {
            cout << "It is not a palindrome ";
      }

      return 0;
}