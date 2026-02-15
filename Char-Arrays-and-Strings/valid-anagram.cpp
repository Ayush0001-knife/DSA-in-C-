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

void linearApproach(string str1, string str2)
{
      if (str1.length() != str2.length())
      {
            cout << "The strings are not anagram." << endl;
      }
      else
      {
            int count[26] = {0};
            for (int i = 0; i < str1.length(); i++)
            {
                  count[str1[i] - 'a']++;
            }
            for (int i = 0; i < str2.length(); i++)
            {
                  if (count[str1[i] - 'a'] == 0)
                  {
                        cout << "The strings are not anagram." << endl;
                  }
                  count[str1[i] - 'a']--;
            }
      }
}

int main()
{
      string str1 = "anagram";
      string str2 = "nagaram";

      sortingAndComparing(str1, str2);

      return 0;
}
