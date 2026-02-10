#include <iostream>
using namespace std;

int main()
{
      int arr[3][3] = {{85, 86, 87},
                       {75, 76, 77},
                       {65, 66, 67}};

      int n = 3, m = 3;

      int strRow = 0, endRow = n - 1, strCol = 0, endCol = m - 1;

      while (strRow <= endRow && strCol <= endCol)
      {
            for (int i = strCol; i <= endCol; i++)
            {
                  cout << arr[strRow][i] << " ";
            }
            for (int i = strRow + 1; i <= endRow; i++)
            {
                  cout << arr[i][endCol] << " ";
            }
            for (int i = endCol - 1; i >= strCol; i--)
            {
                  cout << arr[endRow][i] << " ";
            }
            for (int i = endRow - 1; i >= strRow + 1; i--)
            {
                  cout << arr[i][strCol] << " ";
            }
            strRow++, strCol++;
            endRow--, endCol--;
      }

      return 0;
}