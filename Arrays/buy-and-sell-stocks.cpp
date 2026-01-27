#include <iostream>
using namespace std;

// This is The Brute Force Approach with time complexity O(n^2)
int bruteForceApproach(int prices[], int n)
{
      int max_profit = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  int curr_profit = prices[j] - prices[i];
                  max_profit = max(max_profit, curr_profit);
            }
      }
      return max_profit;
}

int main()
{
      int prices[] = {7, 1, 5, 3, 6, 4};
      int n = sizeof(prices) / sizeof(int);

      int max_profit = bruteForceApproach(prices, n);

      cout << "Max Profit : " << max_profit;
      return 0;
}
