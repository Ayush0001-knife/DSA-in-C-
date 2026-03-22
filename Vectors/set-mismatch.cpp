#include <iostream>
#include <algorithm>
using namespace std;

void bruteForceApproach(int nums[], int n)
{
      for (int i = 0; i < n; i++)
      {
            if (nums[i] == nums[i + 1])
            {
                  cout << "Duplicate: " << nums[i] << endl;
            }
            else if (nums[i] + 1 != nums[i + 1])
            {
                  cout << "Missing: " << nums[i] + 1 << endl;
            }
      }
}

int main()
{
      int nums[] = {1, 2, 2, 4};
      int n = sizeof(nums) / sizeof(nums[0]);

      sort(nums, nums + n);

      int duplicate = -1, missing = -1;

      if (nums[0] != 1)
      {
            missing = 1;
      }

      for (int i = 0; i < n - 1; i++)
      {
            if (nums[i] == nums[i + 1])
            {
                  duplicate = nums[i];
            }
            if (nums[i + 1] != nums[i] + 1)
            {
                  missing = nums[i] + 1;
            }
      }

      if (missing == -1)
      {
            missing = n;
      }

      cout << "[ " << duplicate << "," << missing << " ]" << endl;

      return 0;
}