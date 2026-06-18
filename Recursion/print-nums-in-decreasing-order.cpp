#include <iostream>
using namespace std;

int printDecreasing(int n)
{
      if (n == 1)
      {
            cout << n << " ";
            return 1;
      }
      cout << n << " ";
      return printDecreasing(n - 1);
}

int main()
{
      int n;
      cout << "Enter a number: ";
      cin >> n;
      printDecreasing(n);
      return 0;
}