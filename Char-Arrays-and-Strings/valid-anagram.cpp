#include <iostream>
using namespace std;

void sortingAndComparing(string str1, string str2)
{
      sort(str1.begin(), str1.end());
      sort(str2.begin(), str2.end());

      if (str1 == str2)
            cout << "The strings are anagrams." << endl;
      else
            cout << "The strings are not anagrams." << endl;
}

int main()
{
      string str1 = "anagram";
      string str2 = "nagaram";

      sortingAndComparing(str1, str2);

      return 0;
}
