#include <iostream>
using namespace std;

void printPrime(int n)
{

      for (int i = 3; i < n; i++)
      {
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++)
            {
                  if (i % j == 0)
                  {
                        isPrime = false;
                        continue;
                  }
            }
            if (isPrime)
            {
                  cout << i << " ";
            }
      }
}

int main()
{
      int n;
      cout << "Enter a number: ";
      cin >> n;
      printPrime(n);

      return 0;
}