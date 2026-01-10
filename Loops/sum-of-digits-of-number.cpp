#include <iostream>
using namespace std;

int main()
{

      cout << "enter a Number : ";
      int n;
      cin >> n;
      int sum = 0;
      int sum_odd = 0;

      while (n > 0)
      {
            int last_digit = n % 10;
            if (last_digit % 2 != 0)
            {
                  sum_odd = sum_odd + last_digit; // Sum of Odd Digits
            }
            sum = sum + last_digit; // Sum of All Digits
            cout << last_digit;     // Print digits in reverse order
            n = n / 10;
      }

      cout << "Sum of digits is : " << sum << endl;
      cout << "Sum of odd digits is : " << sum_odd << endl;

      return 0;
}