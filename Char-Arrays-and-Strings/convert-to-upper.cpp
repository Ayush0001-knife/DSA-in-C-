#include <iostream>
using namespace std;

int main()
{
      char word[] = "apple";
      int n = strlen(word);

      for (int i = 0; i < n; i++)
      {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                  int pos = word[i] - 'a';
                  word[i] = pos + 'A';
            }
      }

      cout << word;

      return 0;
}