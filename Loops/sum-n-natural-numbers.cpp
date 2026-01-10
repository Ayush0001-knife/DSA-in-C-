#include <iostream>
using namespace std;

int main()
{

      cout << "enter a Number : ";
      int n;
      cin >> n;
      int sum = 0;

      for (int i = 1; i <= n; i++)
      {
            sum = sum + i;
      }

      cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
      return 0;
}