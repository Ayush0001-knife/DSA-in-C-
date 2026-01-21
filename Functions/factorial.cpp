#include <iostream>
using namespace std;

void fact(int n)
{
      int fact = 1;
      if (n < 0)
      {
            cout << "Factorial is not defined for negative numbers.";
      }
      else if (n == 0 || n == 1)
      {
            cout << "Factorial of " << n << " is 1";
            ;
      }
      else
      {
            for (int i = 2; i <= n; i++)
            {
                  fact *= i;
            }
      }

      cout << "Factorial of " << n << " is " << fact;
}

int main()
{
      int n;
      cout << "Enter a number : ";
      cin >> n;
      fact(n);

      return 0;
}