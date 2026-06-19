#include <iostream>
using namespace std;

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

int main()
{
      string str = "appnnacollege";
      string newStr = "";

      removeDuplicates(str, 0, str.length(), newStr);

      return 0;
}