#include <iostream>
using namespace std;

void printSum(int n)
{
      int sum = 0;
      if (n == 1)
      {

            sum += n;
            cout << Sum << " ";
            return;
      }
      cout << n << " ";
      printSum(n - 1);
}

int main()
{
      int n;
      cout << "Enter a number: ";
      cin >> n;
      printSum(n);

      return 0;
}