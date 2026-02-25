#include <iostream>
#include <vector>
using namespace std;

vector<int> bruteForceApproach(const vector<int> &vec, int target)
{
      for (int i = 0; i < vec.size(); i++)
      {
            for (int j = i + 1; j < vec.size(); j++)
            {
                  if (vec[i] + vec[j] == target)
                  {
                        return {i, j};
                  }
            }
      }

      return {};
}

vector<int> twoPointerApproach(const vector<int> &vec, int target)
{
      int str = 0, end = vec.size() - 1;
      vector<int> ans;

      while (str < end)
      {
            if (vec[str] + vec[end] == target)
            {
                  ans.push_back(str);
                  ans.push_back(end);
                  return ans;
            }
            else if (vec[str] + vec[end] > target)
            {
                  end--;
            }
            else
            {
                  str++;
            }
      }
      return ans;
}

int main()
{
      vector<int> vec = {2, 7, 11, 15};
      int target;

      cout << "Enter the target sum: ";
      cin >> target;

      // vector<int> result = bruteForceApproach(vec, target);
      vector<int> result = twoPointerApproach(vec, target);

      if (!result.empty())
      {
            cout << "Pair found at indices: ["
                 << result[0] << ", " << result[1] << "]" << endl;
      }
      else
      {
            cout << "No pair found." << endl;
      }

      return 0;
}