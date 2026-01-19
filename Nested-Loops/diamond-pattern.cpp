#include <iostream>
using namespace std;

int main()

{

      for (int i = 0; i < 4; i++)
      {
            for (int j = 1; j <= 4 - i; j++)
            {
                  cout << "   ";
            }
            for (int k = 1; k <= (2 * i) + 1; k++)
            {
                  cout << " * ";
            }
            for (int j = 1; j <= 4 - i; j++)
            {
                  cout << "   ";
            }
            cout << endl;
      }

      return 0;
}