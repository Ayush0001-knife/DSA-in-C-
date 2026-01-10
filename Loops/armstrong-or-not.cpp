#include <iostream>
using namespace std;

int main()
{

      cout << "enter a Number : ";
      int n;
      cin >> n;
      int sum = 0;

      while (n > 0)
      {
            int last_digit = n % 10;
            sum = sum + (last_digit * last_digit * last_digit); // Sum of All Digits
            n = n / 10;
      }

      if (sum == n)
      {
            cout << "Armstrong Number" << endl;
      }
      else
      {
            cout << "Not an Armstrong Number" << endl;
      }

      return 0;
}