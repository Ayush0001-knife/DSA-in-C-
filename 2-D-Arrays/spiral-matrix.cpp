#include <iostream>
using namespace std;

int main()
{
      int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

      int n = 3, m = 4;

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