#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a number: ";
      int n;
      cin >> n;

      int original = n; // store original number
      int sum = 0;

      while (n > 0)
      {
            int last_digit = n % 10;
            sum = sum + (last_digit * last_digit * last_digit);
            n = n / 10;
      }

      if (sum == original)
      {
            cout << "Armstrong Number" << endl;
      }
      else
      {
            cout << "Not an Armstrong Number" << endl;
      }

      return 0;
}