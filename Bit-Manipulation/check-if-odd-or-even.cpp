#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a Positive integer: ";
      int n;
      cin >> n;

      if (!(n & 1))
      {
            cout << n << " is an Even number." << endl;
      }
      else
      {
            cout << n << " is an Odd number." << endl;
      }

      return 0;
}
