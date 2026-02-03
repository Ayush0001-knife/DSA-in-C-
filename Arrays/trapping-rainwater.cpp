#include <iostream>
#include <algorithm>
using namespace std;

// This is The Brute Force Approach with time complexity O(n^2) and space complexity O(1)
int bruteForceApproach(int heights[], int n)
{
      // Edge case: less than 3 bars can't trap water
      if (n < 3)
            return 0;

      int trappedWater = 0;

      for (int i = 1; i < n - 1; i++)
      {
            int max_left = 0;
            int max_right = 0;

            // Find max on left
            for (int j = i; j >= 0; j--)
            {
                  max_left = max(heights[j], max_left);
            }

            // Find max on right
            for (int j = i; j < n; j++)
            {
                  max_right = max(heights[j], max_right);
            }

            // Calculate water at position i
            int water = min(max_left, max_right) - heights[i];

            // Add only if positive
            if (water > 0)
            {
                  trappedWater += water;
            }
      }

      return trappedWater;
}

int prefixArrayApproach(int heights[], int n)
{
      // To be implemented
      return 0;
}

int main()
{
      int heights[] = {4, 2, 0, 3, 2, 5};
      int n = sizeof(heights) / sizeof(heights[0]);

      int trappedWater = bruteForceApproach(heights, n);

      cout << "The amount of water trapped is: " << trappedWater << endl;

      return 0;
}
