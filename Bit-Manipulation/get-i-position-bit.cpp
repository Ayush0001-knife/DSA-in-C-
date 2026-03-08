#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a Positive integer: ";
      int n;
      cin >> n;

      int i;
      cout << "Enter the position of the bit to check (0-based index): ";
      cin >> i;

      int bitMask = (1 << i); // Create a bitmask with the i-th bit set to 1

      if (n & bitMask) // Check if the i-th bit is set in n
      {
            cout << "The " << i << "-th bit of " << n << " is 1." << endl;
      }
      else
      {
            cout << "The " << i << "-th bit of " << n << " is 0." << endl;
      }

      return 0;
}