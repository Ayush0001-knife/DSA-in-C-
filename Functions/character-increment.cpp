#include <iostream>
using namespace std;

int getNextChar(char ch)
{
      if (ch == 'z')
      {
            return 'a';
      }
      else if (ch == 'Z')
      {
            return 'A';
      }
      else
      {
            return ch + 1;
      }
}

int main()
{
      char inputChar;
      cout << "Enter a character: ";
      cin >> inputChar;

      char nextChar = getNextChar(inputChar);
      cout << "The next character is: " << nextChar << endl;

      return 0;
}