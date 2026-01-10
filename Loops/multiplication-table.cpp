#include <iostream>
using namespace std;

int main()
{
      cout << "enter a Number : ";
      int n;
      cin >> n;

      for (int i = 1; i <= 10; i++)
      {
            cout << n << " x " << i << " = " << n * i << endl;
      }

      return 0;
}