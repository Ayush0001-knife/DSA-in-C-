#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a Positive integer: ";
      int n;
      cin >> n;
      int count = 0;

      while (n > 0)
      {
            if ((n & 1) != 0)
            {
                  count += 1;
            }
            n = n >> 1;
      }

      cout << "Count of set bit is : " << count;

      return 0;
}