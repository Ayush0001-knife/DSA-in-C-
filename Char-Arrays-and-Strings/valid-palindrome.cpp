#include <iostream>
using namespace std;

int main()
{
      char word[] = "A man, a plan, a canal: Panama";
      int n = strlen(word);
      int index = 0;

      for (int i = 0; i < n; i++)
      {
            if (isalnum(word[i]))
            {
                  word[index++] = word[i];
            }
      }
      word[index] = '\0';

      for (int i = 0; i < n; i++)
      {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                  int pos = word[i] - 'A';
                  word[i] = pos + 'a';
            }
      }

      int str = 0, end = n - 1;
      bool isPalindrome = true;

      while (str < end)
      {
            if (word[str] != word[end])
            {
                  isPalindrome = false;
                  break;
            }
            str++;
            end--;
      }

      if (isPalindrome)
            cout << "The word is a palindrome." << endl;
      else
            cout << "The word is not a palindrome." << endl;

      return 0;
}
