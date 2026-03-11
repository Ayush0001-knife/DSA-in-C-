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

      int bitMask = (1 << i);

      int new_num = bitMask + n;
      cout << "New Num : " << new_num;

      return 0;
}