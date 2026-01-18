#include <iostream>
using namespace std;

int main()
{
      int n;
      cout << "Enter a number : ";
      cin >> n;

      int first = 0, second = 1;
      cout << first << "  " << second << "  ";

      for (int i = 0; i < n; i++)
      {
            int third = first + second;
            cout << third << "  ";
            first = second; // Update first to the value of second
            second = third; // Update second to the value of third
      }
      return 0;
}