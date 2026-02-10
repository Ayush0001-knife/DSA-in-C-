#include <iostream>
using namespace std;

// It is Only possible only when n and m are equal

int main()
{
      int arr[3][3] = {{1, 1, 1},
                       {1, 1, 1},
                       {1, 1, 1}};

      int n = 3, m = 3;
      int pSum = 0;
      int sSum = 0;
      int totalSum = 0;

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  if (i == j)
                  {
                        pSum += arr[i][i];
                  }
                  else if (j == n - i - 1)
                  {
                        sSum += arr[i][n - i - 1];
                  }
            }
      }

      totalSum = pSum + sSum;
      cout << "Total Sum of Diagonals: " << totalSum << endl;
      return 0;
}