#include <iostream>
using namespace std;

void printDecreasing(int n)
{
      if (n == 1)
      {
            cout << n << " ";
            return;
      }
      // printDecreasing(n - 1);   // In Increasing order, we will print after the recursive call
      cout << n << " ";
      printDecreasing(n - 1); // In Decreasing order, we will print before the recursive call
}

int main()
{
      int n;
      cout << "Enter a number: ";
      cin >> n;
      printDecreasing(n);
      return 0;
}