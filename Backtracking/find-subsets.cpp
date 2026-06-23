#include <iostream>
using namespace std;

void substring(string str, string subset)
{
      if (str.size() == 0)
      {
            cout << subset << endl;
            return;
      }
      char ch = str[0];
      substring(str.substr(1, str.size() - 1), subset + ch); // yes
      substring(str.substr(1, str.size() - 1), subset);      // no
}

int main()
{
      string str = "abc";
      string subsets = "";
      substring(str, subsets);

      return 0;
}