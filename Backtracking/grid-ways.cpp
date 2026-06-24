#include <iostream>
using namespace std;

int factorial(int n)
{
      int ans = 1;
      for (int i = n; i >= 1; i--)
      {
            ans *= i;
      }
      return ans;
}

int optimizedWay(int n, int m)
{
      int ans = factorial(n + m - 2) / (factorial(n - 1) * factorial(m - 1));
      return ans;
}

int gridWays(int r, int c, int n, int m, string ans)
{
      if (r == n - 1 && c == m - 1)
      {
            cout << ans << endl;
            return 1;
      }
      if (r >= n || c >= m)
      {
            return 0;
      }

      int v1 = gridWays(r, c + 1, n, m, ans + "R");
      int v2 = gridWays(r + 1, c, n, m, ans + "D");

      return v1 + v2;
}

int main()
{
      int n = 4, m = 4;
      string ans = "";

      int totalWays = gridWays(0, 0, n, m, ans);

      cout << "Total ways : " << totalWays << endl;

      cout << "Total ways : " << optimizedWay(n, m) << endl;

      return 0;
}