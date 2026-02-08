#include <iostream>
using namespace std;

void printArray(int arr[3][3], int n, int m)
{
      cout << "The elements of the 2-D array are: " << endl;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cout << arr[i][j] << "  ";
            }
            cout << endl;
      }
}

void takeInput(int arr[3][3], int n, int m)
{
      cout << "Enter the elements of the 2-D array: " << endl;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> arr[i][j];
            }
      }

      printArray(arr, n, m);
}

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
      takeInput(arr, n, m);
}

int main()
{
      int arr[3][3] = {{85, 86, 87},
                       {75, 76, 77},
                       {65, 66, 67}};

      printIndexes(arr, 3, 3);

      return 0;
}
