#include <iostream>
using namespace std;

int main()
{

      int n;
      cout << "Enter any positive integer : ";
      cin >> n;

      int i, j;
      cout << "Enter i : ";
      cin >> i;

      cout << "Enter j : ";
      cin >> j;

      int left = ~0 << (j + 1);
      int right = (1 << i) - 1;

      int bitMask = left | right;

      int ans = n & bitMask;

      cout << "Answer is : " << ans;

      return 0;
}