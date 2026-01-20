#include <iostream>
using namespace std;

int main()
{
      int n = 4;

      for (int i = 1; i <= n; i++)
      {
            for (int j = 1; j <= i; j++)
            {
                  cout << " * ";
            }
            for (int j = 1; j <= (2 * (n - i)); j++)
            {
                  cout << "   ";
            }
            for (int j = 1; j <= i; j++)
            {
                  cout << " * ";
            }
            cout << endl;
      }
      for (int k = 1; k <= n; k++)
      {
            for (int j = 1; j <= (n - k + 1); j++)
            {
                  cout << " * ";
            }
            for (int j = 1; j <= 2 * (k - 1); j++)
            {
                  cout << "   ";
            }
            for (int j = 1; j <= (n - k + 1); j++)
            {
                  cout << " * ";
            }
            cout << endl;
      }

      return 0;
}