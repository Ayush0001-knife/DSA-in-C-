#include <iostream>
using namespace std;

void firstMethod()
{
      char word[10];
      cin >> word;

      cout << "Your word was : " << word << endl;
      cout << "Length of your word : " << strlen(word) << endl;
}

void secondMethod()
{
      char word[50];
      cin.getline(word, 50, '.');

      cout << "Your word was : " << word << endl;
      cout << "Length of your word : " << strlen(word) << endl;
}

int main()
{
      cout << "This is Done By first Method " << endl;
      firstMethod();

      cout << endl;
      cout << endl;

      cout << "This is Done By second Method " << endl;
      secondMethod();

      return 0;
}