#include <iostream>
using namespace std;

int main()
{
      for (int i = 1; i <= 4; i++)
      {
            for (int j = 3; j >= 3; j--)
            {
                  cout << "    ";
            }
            for (int j = 1; j <= i + 1; j++)
            {
                  cout << " * ";
            }
            for (int j = 3; j >= 3; j--)
            {
                  cout << "    ";
            }
            cout << endl;
      }
      return 0;
}