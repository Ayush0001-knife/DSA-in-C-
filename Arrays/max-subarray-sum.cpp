#include <iostream>
using namespace std;

// This is The Brute Force Approach with O(n^3)
int bruteForceApproach(int arr[], int n)
{
      int max_sum = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  int curr_sum = 0;
                  for (int k = i; k <= j; k++)
                  {
                        curr_sum += arr[k];
                  }
                  if (curr_sum > max_sum)
                  {
                        max_sum = curr_sum;
                  }
            }
      }
      return max_sum;
}

int main()
{
      int arr[] = {2, -3, 6, -5, 4, 2};
      // int arr[] = {1, 2, 3, 4, 5};
      int n = sizeof(arr) / sizeof(arr[0]);

      int max_sum = bruteForceApproach(arr, n);

      cout << max_sum << endl;
      return 0;
}