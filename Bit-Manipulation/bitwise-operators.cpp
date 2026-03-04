#include <iostream>
using namespace std;

int main()
{
      int a = 3;
      int b = 5;

      // Bitwise AND ("&")
      cout << "a & b = " << (a & b) << endl; // Output: 1 (binary: 0011 & 0101 = 0000 0001)

      // Bitwise OR ("|")
      cout << "a | b = " << (a | b) << endl; // Output: 7 (binary: 0011 | 0101 =  0111)

      // Bitwise XOR ("^")
      cout << "a ^ b = " << (a ^ b) << endl; // Output: 6 (binary: 0011 ^ 0101 =  0110)

      // Bitwise NOT ("~")
      cout << "~a = " << (~a) << endl; // Output: -4 (binary: ~0011 = 1100 in two's complement)
      cout << "~b = " << (~b) << endl; // Output: -6 (binary: ~0101 = 1010 in two's complement)

      return 0;
}