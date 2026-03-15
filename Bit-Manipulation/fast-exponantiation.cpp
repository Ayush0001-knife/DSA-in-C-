#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a Positive integer: ";
      int x;
      cin >> x;

      int n;
      cout << "Enter the exponential power : ";
      cin >> n;

      int ans = 1;

      while (n > 0)
      {
            if ((n & 1) != 0)
            {
                  ans = ans * x;
                  x = x * x;
            }
            else
            {
                  x = x * x;
            }
            n = n >> 1;
      }

      cout << "Answer is : " << ans << endl;

      return 0;
}