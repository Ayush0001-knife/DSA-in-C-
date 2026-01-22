#include <iostream>
using namespace std;

int factorial(int n)
{
      int fact = 1;
      if (n < 0)
      {
            cout << "Factorial is not defined for negative numbers.";
            return -1; // Indicate error
      }
      else if (n == 0 || n == 1)
      {
            return 1;
      }
      else
      {
            for (int i = 2; i <= n; i++)
            {
                  fact *= i;
            }
            return fact;
      }
}

void binomalCoefficient(int n, int r)
{
      if (r > n || n < 0 || r < 0)
      {
            cout << "Invalid values for n and r.";
            return;
      }

      int nFact = factorial(n);
      int rFact = factorial(r);
      int nMinusRFact = factorial(n - r);

      if (nFact == -1 || rFact == -1 || nMinusRFact == -1)
      {
            return; // Error in factorial calculation
      }

      int binomCoeff = nFact / (rFact * nMinusRFact);

      cout << "Binomial Coefficient C(" << n << ", " << r << ") is " << binomCoeff;
}

int main()
{
      int n, r;

      cout << "Enter value of n: ";
      cin >> n;
      cout << "Enter value of r: ";
      cin >> r;

      binomalCoefficient(n, r);

      return 0;
}