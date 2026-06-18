#include <iostream>
using namespace std;

void printDecreasing(int n)
{
      if (n == 1)
      {
            cout << n << " ";
            return;
      }
      cout << n << " ";
      printDecreasing(n - 1);
}

int main()
{
      int n;
      cout << "Enter a number: ";
      cin >> n;
      printDecreasing(n);
      return 0;
}