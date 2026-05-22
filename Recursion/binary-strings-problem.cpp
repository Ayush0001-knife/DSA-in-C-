#include <iostream>
using namespace std;

// with last place approach
// void binaryStrings(int n, int lastPlace, string ans)
// {
//       if (n == 0)
//       {
//             cout << ans << endl;
//             return;
//       }
//       if (lastPlace != 1)
//       {
//             binaryStrings(n - 1, 0, ans + "0");
//             binaryStrings(n - 1, 1, ans + "1");
//       }
//       else
//       {
//             binaryStrings(n - 1, 0, ans + "0");
//       }
// }

// without last place approach
void binaryStrings(int n, string ans)
{
      if (n == 0)
      {
            cout << ans << endl;
            return;
      }
      if (ans[ans.size() - 1] != '1')
      {
            binaryStrings(n - 1, ans + "0");
            binaryStrings(n - 1, ans + "1");
      }
      else
      {
            binaryStrings(n - 1, ans + "0");
      }
}

int main()
{
      int n = 3;
      // binaryStrings(n, 0, "");
      binaryStrings(n, "");

      return 0;
}