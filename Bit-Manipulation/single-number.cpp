#include <iostream>
#include <vector>
using namespace std;

void notOptimalApproach(int nums[], int n)
{
      int maxVal = nums[0];
      for (int i = 1; i < n; i++)
      {
            if (nums[i] > maxVal)
                  maxVal = nums[i];
      }

      vector<int> frequency(maxVal + 1, 0);

      for (int i = 0; i < n; i++)
      {
            frequency[nums[i]]++;
      }

      for (int i = 0; i <= maxVal; i++)
      {
            if (frequency[i] == 1)
            {
                  cout << "Single element is: " << i << endl;
            }
      }
}

void optimalApproach(int nums[], int n)
{
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            ans ^= nums[i];
      }

      cout << "Single element is: " << ans << endl;
}

int main()
{
      int nums[] = {2, 2, 1};
      int n = sizeof(nums) / sizeof(int);

      notOptimalApproach(nums, n);
      optimalApproach(nums, n);

      return 0;
}