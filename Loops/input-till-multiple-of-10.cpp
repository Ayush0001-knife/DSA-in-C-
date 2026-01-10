#include <iostream>
using namespace std;

int main()
{
      int n;

      do
      {
            cout << "Enter numbers (input will stop when a multiple of 10 is entered):" << endl;
            cin >> n;
            cout << "You entered: " << n << endl;
      } while (n % 10 != 0);

      return 0;
}