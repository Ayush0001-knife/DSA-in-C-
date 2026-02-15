#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
      char word[] = "A man, a plan, a canal: Panama";
      int n = strlen(word);
      int index = 0;

      // Remove non-alphanumeric
      for (int i = 0; i < n; i++)
      {
            if (isalnum(word[i]))
            {
                  word[index++] = tolower(word[i]); // convert to lowercase here
            }
      }

      word[index] = '\0';
      n = index;

      int start = 0, end = n - 1;
      bool isPalindrome = true;

      while (start < end)
      {
            if (word[start] != word[end])
            {
                  isPalindrome = false;
                  break;
            }
            start++;
            end--;
      }

      if (isPalindrome)
            cout << "The word is a palindrome." << endl;
      else
            cout << "The word is not a palindrome." << endl;

      return 0;
}
