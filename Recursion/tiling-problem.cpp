#include <iostream>
using namespace std;

int tilingProblem(int n) // 2*n
{
      if (n == 0 || n == 1)
      {
            return 1;
      }

      // vertical choice
      int ans1 = tilingProblem(n - 1);

      // horizontal choice
      int ans2 = tilingProblem(n - 2);

      return ans1 + ans2;
}

int main()
{
      int n = 4;
      cout << "Number of ways to tile 2 x " << n << " floor is: " << tilingProblem(n) << endl;

      return 0;
}