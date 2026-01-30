#include <iostream>
using namespace std;

// palindromic pattern (Very tough)

int main()
{
      int n = 5;

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n - i; j++)
            {
                  cout << "   ";
            }
            // inner loop 1
            // inner loop 2
            for (int j = 0; j < n - i; j++)
            {
                  cout << "   ";
            }
      }

      return 0;
}