#include <iostream>
using namespace std;

int main()
{
      cout << "Enter a number: ";
      int n;
      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cout << i << endl;
      }
      for (int i = n; i >= 1; i--)
      {
            cout << i << endl;
      }

      return 0;
}