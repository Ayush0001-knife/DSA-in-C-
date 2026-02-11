#include <iostream>
using namespace std;

void bruteForceApproach(int arr[3][3], int n, int m, int target)
{
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  if (arr[i][j] == target)
                  {
                        cout << "Element found at index: (" << i << "," << j << ")" << endl;
                  }
            }
      }
}

void rowBinarySearch(int arr[3][3], int n, int m, int target)
{
      for (int i = 0; i < n; i++)
      {
            int str = 0, end = m - 1;
            while (str <= end)
            {
                  int mid = str + (end - str) / 2;
                  if (arr[i][mid] == target)
                  {
                        cout << "Element found at index: (" << i << "," << mid << ")" << endl;
                        break;
                  }
                  else if (arr[i][mid] > target)
                  {
                        end = mid - 1;
                  }
                  else
                  {
                        str = mid + 1;
                  }
            }
      }
}

int main()
{
      int arr[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};

      int n = 3, m = 3;
      int target;
      cout << "Enter the target element: ";
      cin >> target;

      bruteForceApproach(arr, n, m, target);

      return 0;
}