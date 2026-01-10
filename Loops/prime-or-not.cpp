#include <iostream>
#include <cmath>
using namespace std;

void isPrime1(int n) // using loop from 2 to n-1
{
      bool prime = true;
      if (n <= 1)
      {
            cout << "Not Prime" << endl;
            return;
      }
      else if (n == 2)
      {
            cout << "Prime" << endl;
            return;
      }
      for (int i = 2; i < n; i++)
      {
            if (n % i == 0)
            {
                  prime = false;
            }
      }
      if (prime)
      {
            cout << "Prime" << endl;
      }
      else
      {
            cout << "Not Prime" << endl;
      }
}

void isPrime2(int n) // using loop from 2 to sqrt(n)
{
      bool prime = true;
      if (n <= 1)
      {
            cout << "Not Prime" << endl;
            return;
      }
      else if (n == 2)
      {
            cout << "Prime" << endl;
            return;
      }
      for (int i = 2; i <= sqrt(n); i++)
      {
            if (n % i == 0)
            {
                  prime = false;
            }
      }
      if (prime)
      {
            cout << "Prime" << endl;
      }
      else
      {
            cout << "Not Prime" << endl;
      }
}

int main()
{
      int n;
      cout << "Enter a positive number: ";
      cin >> n;
      isPrime1(n);

      return 0;
}