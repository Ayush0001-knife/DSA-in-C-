#include <iostream>
using namespace std;

int main()
{
      char word[] = "code";
      int n = strlen(word);

      int str = 0, end = n - 1;

      while (str < end)
      {
            swap(word[str], word[end]);
            str++;
            end--;
      }

      cout << word;

      return 0;
}