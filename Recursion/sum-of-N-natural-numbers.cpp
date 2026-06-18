#include <iostream>
using namespace std;

int printSum(int n)
{
      if (n == 0)
      {
            return 0;
      }
      return n + printSum(n - 1);
}

int main()
{
      int n;
      cout << "Enter a number: ";
      cin >> n;
      cout << "Sum of first " << n << " natural numbers is: " << printSum(n) << endl;

      return 0;
}