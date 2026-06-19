#include <iostream>
using namespace std;

// with i approach
string removeDuplicates(string str, int i, int n, string newStr)
{
      if (i == n)
      {
            cout << newStr << endl;
            return newStr;
      }

      if (newStr.find(str[i]) != string::npos)
      {
            return removeDuplicates(str, i + 1, n, newStr);
      }
      else
      {
            newStr += str[i];
            return removeDuplicates(str, i + 1, n, newStr);
      }
}

// without i approach
// string removeDuplicates(string str, string newStr, int n)
// {
//       if (n < 0)
//       {
//             cout << newStr << endl;
//             return newStr;
//       }

//       if (newStr.find(str[n]) != string::npos)
//       {
//             return removeDuplicates(str, newStr, n - 1);
//       }
//       else
//       {
//             newStr = str[n] + newStr;
//             return removeDuplicates(str, newStr, n - 1);
//       }
// }

int main()
{
      string str = "appnnacollege";
      string newStr = "";

      removeDuplicates(str, 0, str.length(), newStr);
      // removeDuplicates(str, newStr, str.length() - 1);

      return 0;
}