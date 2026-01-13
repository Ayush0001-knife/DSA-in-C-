#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a number: ";
      int n;
      cin >> n;

      int original = n;
      int count = 0;
      int sum = 0;

      // Count digits
      int temp = n;
      while (temp > 0)
      {
            count++;
            temp = temp / 10;
      }

      // Calculate Armstrong sum
      temp = n;
      while (temp > 0)
      {
            int last_digit = temp % 10;

            int power = 1;
            for (int i = 0; i < count; i++)
            {
                  power *= last_digit;
            }

            sum += power;
            temp = temp / 10;
      }

      if (sum == original)
            cout << "Armstrong Number" << endl;
      else
            cout << "Not an Armstrong Number" << endl;

      return 0;
}
