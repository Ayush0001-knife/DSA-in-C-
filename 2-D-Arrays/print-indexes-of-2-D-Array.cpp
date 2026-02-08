#include <iostream>
using namespace std;

void printIndexes(int arr[3][3], int n, int m)
{
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cout << "(" << i << "," << j << ")" << "  ";
            }
            cout << endl;
      }
}

int main()
{
      int arr[3][3] = {{85, 86, 87},
                       {75, 76, 77},
                       {65, 66, 67}};

      printIndexes(arr, 3, 3);

      return 0;
}
