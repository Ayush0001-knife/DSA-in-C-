#include <iostream>
using namespace std;

int setBit(int n, int i)
{
      int bitMask = (1 << i);
      return n | bitMask;
}

int clearBit(int n, int i)
{
      int bitMask = ~(1 << i);
      return n & bitMask;
}

int main()
{
      int num = 7;
      int i, value;

      cout << "Enter the position to be updated: ";
      cin >> i;

      cout << "Enter the value (0 or 1): ";
      cin >> value;

      if (value == 0)
            cout << clearBit(num, i);
      else if (value == 1)
            cout << setBit(num, i);
      else
            cout << "Invalid value";

      return 0;
}