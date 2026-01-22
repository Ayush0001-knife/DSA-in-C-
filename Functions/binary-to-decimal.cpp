#include <iostream>
using namespace std;

void convertor(int n)
{
      int decimalNumber = 0;
      int pow = 1;

      while (n > 0)
      {
            int lastDigit = n % 10;
            decimalNumber = decimalNumber + (lastDigit * pow);
            pow *= 2;
            n = n / 10;
      }

      cout << "Decimal equivalent: " << decimalNumber << endl;
}

int main()
{
      int n;
      cout << "Enter a binary number: ";
      cin >> n;

      convertor(n);

      return 0;
}