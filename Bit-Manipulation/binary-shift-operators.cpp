#include <iostream>
using namespace std;

int main()
{
      int a = 7; // In binary: 0111₹

      // Left Shift ("<<")
      cout << "a << 2 = " << (a << 2) << endl; // Output: 28 (binary: 0111 << 2 = 11100)

      // Right Shift (">>")
      cout << "a >> 1 = " << (a >> 1) << endl; // Output: 3 (binary: 0111 >> 1 = 0011)

      return 0;
}