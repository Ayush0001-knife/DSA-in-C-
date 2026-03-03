#include <iostream>
using namespace std;

int main()
{
      int nums[] = {1, 2, 2, 4};
      int n = sizeof(nums) / sizeof(nums[0]);

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

      return 0;
}