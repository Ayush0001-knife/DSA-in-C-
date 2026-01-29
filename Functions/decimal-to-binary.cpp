#include <iostream>
using namespace std;

void dectobin(int decimalNumber)
{
      int pow = 1;
      int n = decimalNumber;
      int binaryNumber = 0;

      while (n > 0)
      {
            int lastDigit = n % 2;
            binaryNumber = binaryNumber + (lastDigit * pow);
            pow *= 10;
            n = n / 2;
      }
      cout << "Binary equivalent: " << binaryNumber << endl;
}

int main()
{
      int n;
      cout << "Enter a decimal number: ";
      cin >> n;

      dectobin(n);

      return 0;
}
