#include <iostream>
using namespace std;

void oddOReven(int n)
{
      if (n % 2 == 0)
      {
            cout << "Even";
      }
      else
      {
            cout << "Odd";
      }
}

int main()
{
      int n;
      cout << "Enter The number : ";
      cin >> n;

      oddOReven(n);

      return 0;
}