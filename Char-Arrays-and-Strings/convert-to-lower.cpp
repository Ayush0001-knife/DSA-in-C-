#include <iostream>
using namespace std;

int main()
{
      char word[] = "APPLE";
      int n = strlen(word);

      for (int i = 0; i < n; i++)
      {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                  int pos = word[i] - 'A';
                  word[i] = pos + 'a';
            }
      }

      cout << word;

      return 0;
}