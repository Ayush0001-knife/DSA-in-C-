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

// This is The Prefix Array Approach with time complexity O(n) and space complexity O(n)
int prefixArrayApproach(int heights[], int n)
{

      int leftmax[n], rightmax[n];      // Create two arrays:
      leftmax[0] = heights[0];          // leftMax[i] → maximum height from 0 to i
      rightmax[n - 1] = heights[n - 1]; // rightMax[i] → maximum height from i to n-1

      int trappedWater = 0;

      // Fill leftmax Array
      for (int i = 1; i < n; i++)
      {
            leftmax[i] = max(leftmax[i - 1], heights[i - 1]);
      }

      // Fill rightMax
      for (int i = n - 2; i >= 0; i--)
      {
            rightmax[i] = max(rightmax[i + 1], heights[i + 1]);
      }

      // Calculate water
      for (int i = 1; i < n - 1; i++)
      {
            int water = min(leftmax[i], rightmax[i]) - heights[i];
            if (water > 0)
            {
                  trappedWater += water;
            }
      }

      return trappedWater;
}

//
int twoPointersApproach(int heights[], int n)
{
      int trappedWater = 0;
      int left = 0, right = n - 1, leftMax = 0, rightMax = 0;

      while (left < right)
      {
            if (heights[left] < heights[right])
            {
                  if (heights[left] >= leftMax)
                  {
                        leftMax = heights[left];
                  }
                  else
                  {
                        trappedWater += leftMax - heights[left];
                  }
                  left++;
            }
            else
            {
                  if (heights[right] >= rightMax)
                  {
                        rightMax = heights[right];
                  }
                  else
                  {
                        trappedWater += rightMax - heights[right];
                  }
                  right--;
            }
      }

      return trappedWater;
}

int main()
{
      cout << "Program started" << endl;

      int heights[] = {4, 2, 0, 6, 3, 2, 0, 5};
      int n = sizeof(heights) / sizeof(heights[0]);

      int trappedWater = twoPointersApproach(heights, n);

      cout << "The amount of water trapped is: " << trappedWater << endl;

      return 0;
}