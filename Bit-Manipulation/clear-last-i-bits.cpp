#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a Positive integer: ";
      int n;
      cin >> n;

      int i;
      cout << "Enter the position : ";
      cin >> i;

      int bitMask = (~0 << i);

      int new_num = n & bitMask;
      cout << "New Num : " << new_num << endl;

      return 0;
}