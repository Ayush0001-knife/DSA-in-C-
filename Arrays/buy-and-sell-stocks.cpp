#include <iostream>
using namespace std;

// This is The Brute Force Approach with time complexity O(n^2) and space complexity O(1)
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

// This is The Optimized Brute Force Approach with time complexity O(n) and space complexity O(n)
int optimizedBruteForceApproach(int prices[], int n)
{
      int best_buy[n];
      best_buy[0] = INT16_MAX;

      for (int i = 1; i < n; i++)
      {
            best_buy[i] = min(best_buy[i - 1], prices[i - 1]);
      }

      int max_profit = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            int curr_profit = prices[i] - best_buy[i];
            max_profit = max(max_profit, curr_profit);
      }
      return max_profit;
}

int greedyApproach(int prices[], int n)
{
}

int main()
{
      int prices[] = {7, 1, 5, 3, 6, 4};
      int n = sizeof(prices) / sizeof(int);

      // int max_profit = bruteForceApproach(prices, n);
      int max_profit = optimizedBruteForceApproach(prices, n);

      cout << "Max Profit : " << max_profit;
      return 0;
}
